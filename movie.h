#ifndef MOVIE_H
#define MOVIE_H
#include "media.h"
#include <cstring>

class Movie : public Media
{
 private:
  int duration;
  int rating;

 public:
  Movie(char* titleIn, int yearIn, char* creatorIn, int durationIn, int ratingIn);

  char* getTitle();
  int getYear();
  char* getCreator();
  int getDuration();
  int getRating();

  void print() override;
  
  ~Movie();
};

#endif
