#include "videoGame.h"

VideoGame::VideoGame(char* titleIn[40], int* yearIn, char* creatorIn[40], int* ratingIn)
  : Media::Media{ titleIn, yearIn, creatorIn }
  , rating{ *ratingIn }
{}

char* VideoGame::getTitle() { return Meida::getTitle(); }
int* VideoGame::getYear() { return Media::getYear(); }
char* VideoGame::getCreator() { return Media::getCreator(); }
int* VideoGame::getRating() { return rating; }
