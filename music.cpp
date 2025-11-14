#include "music.h"
#include <cstring>
#include <iostream>

Music::Music(char* titleIn, int yearIn, char* creatorIn, int durationIn, char* artistIn)
  : Media::Media{ titleIn, yearIn, creatorIn }
  , duration{ duration }
{
  strcpy(artist, artistIn);
}

char* Music::getTitle() { return Media::getTitle(); }
int Music::getYear() { return Media::getYear(); }
char* Music::getCreator() { return Media::getCreator(); }
int Music::getDuration() { return duration; }
char* Music::getArtist() { return artist; }

void Music::print()
{
  this->Media::print();
  std::cout << "Duration: " << duration << std::endl << "Artist: " << artist << std::endl;
}
  
Music::~Music()
{
  delete artist;
  Media::~Media();
}
