#ifdef VIDEOGAME_H
#define VIDEOGAME_H
#include "media.h"

class VideoGame : public Media
{
 private:
  int rating;

 public:
  VideoGame(char titleIn[40], int yearIn, char creatorIn[40], int ratingIn);
  
  char getTitle() const;
  int getYear() const;
  char getCreator() const;
  int getRating() const;

};

#endif
