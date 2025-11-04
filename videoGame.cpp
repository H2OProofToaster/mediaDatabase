#include "videoGame.h"

VideoGame::VideoGame(char titleIn[40], int yearIn, char creatorIn[40], int ratingIn)
  : Media::Media{ titleIn, yearIn, creatorIn}
  , rating{ ratingIn }
{}

VideoGame::getTitle() const { return Meida::getTitle(); }
VideoGame::getYear() const { return Media::getYear(); }
VideoGame::getCreator() const { return Media::getCreator(); }
VideoGame::getRating() const { return rating; }
