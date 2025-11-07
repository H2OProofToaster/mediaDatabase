#include "videoGame.h"
#include <cstring>

VideoGame::VideoGame(char* titleIn, int yearIn, char* creatorIn, int ratingIn)
  : Media::Media{ titleIn, yearIn, creatorIn }
  , rating{ ratingIn }
{}

char* VideoGame::getTitle() { return Media::getTitle(); }
int VideoGame::getYear() { return Media::getYear(); }
char* VideoGame::getCreator() { return Media::getCreator(); }
int VideoGame::getRating() { return rating; }

VideoGame::~VideoGame()
{
  Media::~Media();
}
