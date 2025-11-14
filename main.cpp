#include "media.h"
#include "videoGame.h"
#include "music.h"
#include "movie.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

void print(vector<Media*> vect);
void add(int type, vector<Media*> &vect);
//By year
void search(int year, vector<Media*> vect);
void rem(int year, vector<Media*> &vect);
//By title
void search(char* title, vector<Media*> vect);
void rem(char* title, vector<Media*> &vect);

int main()
{
  vector<Media*> mediaList;
  bool quit = false;

  //Debug
  int iterations = 0;
  
  while(iterations<3)
    {
      
      cout << "What is your action? (ADD, SEARCH, DELETE, or QUIT)" << &endl;
      char action[7];
      cin.get(action, 7);

      if(strcmp(action, "ADD") == 0)
	{
	  int type = 0;
	  while(type < 1 or type > 3)
	    {
	      cout << "What type of media? (1 - Video Game, 2 - Music, 3 - Movie)" << &endl;
	      cin >> type;
	    }
	  add(type, mediaList);
	  type = 0;
	}
      if(strcmp(action, "SEARCH") == 0 or strcmp(action, "DELETE") == 0)
	{
	  int type;
	  while(type < 1 or type > 2)
	    {
	      cout << "Search by year or title? (1 - Year, 2 - Title)" << &endl;
	      cin >> type;
	    }
	  
	  if(type == 1) //By year
	    {
	      int year;
	      cout << "What year?" << &endl;
	      cin >> year;

	      search(year, mediaList);

	      //Debug
	      quit = true;
	      
	      if(strcmp(action, "DELETE") == 0)
		{
		  int del = -1;
		  while(del < 0 or del > 1)
		    {
		      cout << "Confirm to delete? (1 - Yes, 0 - No)" << &endl;
		      cin >> del;
		    }
		  if(del == 1) { rem(year, mediaList); }
		}
	    }
	  else if(type == 2)
	    {
	      char title[40];
	      cout << "What title?" << &endl;
	      cin.get(title, 40);
	      cin.ignore();
	      
	      search(title, mediaList);

	      if(strcmp(action, "DELETE") == 0)
		{
		  int del = -1;
		  while(del < 0 or del > 1)
		    {
		      cout << "Confirm to delete? (1 - Yes, 0 - No)" << &endl;
		      cin >> del;
		    }
		  if(del == 1) { rem(title, mediaList); }
		}
	    }
	  type = 0;
	}
      
      else if(strcmp(action, "QUIT") == 0) { quit = !quit; }

      iterations ++;
      for(int i = 0; i++; i < strlen(action)) { action[i] = '\0'; }

    }

  return 0;
}

void printVect(vector<Media*> vect)
{
  for(int i = 0; i < vect.size(); i++)
    {
      vect[i]->print();
    }
}

void add(int type, vector<Media*> &vect)
{
  /*
    Slightly ripped off from my student list
    https://github.com/H2OProofToaster/studentList/blob/main/studentList.cpp

    1 - Video Game
    2 - Music
    3 - Movie
  */
  
  char title[40];
  cout << "What is the title?" << &endl;
  cin.ignore();
  cin.get(title, 41);

  int year;
  cout << "What is the year?" << &endl;
  cin >> year;

  char creator[40];
  cout << "Who is the creator?" << &endl;
  cin.ignore();
  cin.get(creator, 41);

  if(type == 1) {
    
    //Video Game
    int rating;
    cout << "What is the rating?" << &endl;
    cin >> rating;
    cin.ignore();

    VideoGame* temp = new VideoGame(title, year, creator, rating);
    
    vect.push_back(temp);

  } else if(type == 2) {

    //Music
    int duration;
    cout << "What is the duration?" << &endl;
    cin >> duration;
    cin.ignore();

    char artist[40];
    cout << "Who is the artist?" << &endl;
    cin.ignore();
    cin.get(artist, 41);

    Music* temp = new Music(title, year, creator, duration, artist);

    vect.push_back(temp);
    
  } else if(type == 3) {

    //Movie
    int duration;
    cout << "What is the duration?" << &endl;
    cin >> duration;
    cin.ignore();

    int rating;
    cout << "What is the rating?" << &endl;
    cin >> rating;
    cin.ignore();

    Movie* temp = new Movie(title, year, creator, duration, rating);

    vect.push_back(temp);

  }
}

//Year overloads

void search(int year, vector<Media*> vect)
{
  /*
    Also partially copied from my student list
    https://github.com/H2OProofToaster/studentList/blob/main/studentList.cpp
  */
  
  vector<Media*> returnVect;

  //Find matches
  for(int i = 0; i < vect.size(); i++)
    {
      if(vect[i]->getYear() == year)
	{
	  //Keep track of them
	  returnVect.push_back(vect[i]);
	}
    }
  //Print matches
  for(int i = 0; i < returnVect.size(); i++) { returnVect[i]->print(); }
  cin.ignore();
}

void rem(int year, vector<Media*> &vect)
{
  /*
    You know the drill
    https://github.com/H2OProofToaster/studentList/blob/main/studentList.cpp
  */

  //Find matches
  for(int i = 0; i < vect.size(); i++)
    {
      if(vect[i]->getYear() == year)
	{
	  //Remove them
	  delete vect[i];
	  vect.erase(vect.begin() + i);
	}
    }
  
  return;
}

//Title overloads

void search(char* title, vector<Media*> vect)
{
  //See year overloads

  vector<Media*> returnVect;

  for(int i = 0; i < vect.size(); i++)
    {
      if(strcmp(vect[i]->getTitle(), title) == 0)
        {
          returnVect.push_back(vect[i]);
        }
    }

  for(int i = 0; i < returnVect.size(); i++) { returnVect[i]->print(); }
  cin.ignore();
}

void rem(char* title, vector<Media*> &vect)
{
  //See year overloads

  for(int i = 0; i < vect.size(); i++)
    {
      if(strcmp(vect[i]->getTitle(), title) == 0)
        {
          delete vect[i];
          vect.erase(vect.begin() + i);
        }
    }
  
  return;
}
