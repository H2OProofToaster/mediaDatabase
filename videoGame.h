#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include "media.h"
#include <cstring>

class VideoGame : public Media
{
 private:
  int rating;

 public:
  VideoGame(char* titleIn, int yearIn, char* creatorIn, int ratingIn);
  
  char* getTitle();
  int getYear();
  char* getCreator();
  int getRating();

};

#endif
