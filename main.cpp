#include "media.h"
#include "videoGame.h"
#include "music.h"
#include "movie.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  return 0;
}

void add(int type, vector<Meida*> &vect )
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
  cin.ignore();

  char creator[40];
  cout << "Who is the creator?" << &endl;
  cin.ignore();
  cin.get(creator, 41);

  switch(type) {
  case 1:
    
    //Video Game
    int rating;
    cout << "What is the rating?" << &endl;
    cin >> rating;
    cin.ignore();

    VideoGame* temp = new VideoGame(title, year, creator, rating);
    
    vect.push_back(temp);
    break;

  case 2:

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
    break;
    
  case 3:

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
    break;
  }
}

//Year overloads

vector<Media*> search(int year, vector<Media*> vect)
{
  /*
    Also partially copied from my student list
    https://github.com/H2OProofToaster/studentList/blob/main/studentList.cpp
  */
  
  returnVect = new vector<Media*>;
  
  for(int i = 0; i < vect.size(); i++)
    {
      if(vect[i]->getYear() == year)
	{
	  returnVect.push_back(vect[i]);
	}
    }

  return returnVect;
}

void delete(int year, vector<Media*> &vect)
{
  /*
    You know the drill
    https://github.com/H2OProofToaster/studentList/blob/main/studentList.cpp
  */
  
  for(int i = 0; i < vect.size(), i++)
    {
      if(vect[i]-> == year)
	{
	  delete vect[i];
	  vect.erase(vect.begin + i);
	}
    }
  
  return;
}

//Title overloads

vector<Media*> search(char* title, vector<Media*> vect)
{
  //See year overloads

  returnVect = new vector<Media*>;

  for(int i = 0; i < vect.size(); i++)
    {
      if(strcmp(vect[i]->getTitle(), title) == 0)
        {
          returnVect.push_back(vect[i]);
        }
    }

  return returnVect;
}

void delete(char* title, vector<Media*> &vect)
{
  //See year overloads

  for(int i = 0; i < vect.size(), i++)
    {
      if(strcmp(vect[i]->getTitle(), title) == 0)
        {
          delete vect[i];
          vect.erase(vect.begin + i);
        }
    }
  
  return;
}
