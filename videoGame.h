#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include "media.h"
#include <cstring>

class VideoGame : public Media
{
 private:
  int rating;

 public:
  VideoGame(char titleIn[40], int yearIn, char creatorIn[40], int ratingIn);
  
  char* getTitle();
  int* getYear();
  char* getCreator();
  int* getRating();

};

#endif
