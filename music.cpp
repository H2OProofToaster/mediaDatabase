#include "music.h"
#include <cstring>

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

Music::~Music()
{
  delete artist;
  Media::~Media();
}
