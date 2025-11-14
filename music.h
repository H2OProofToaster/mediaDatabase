#ifndef MUSIC_H
#define MUSIC_H
#include "media.h"
#include <cstring>

class Music : public Media
{
 private:
  int duration;
  char* artist = new char[40];

 public:
  Music(char* titleIn, int yearIn, char* creatorIn, int durationIn, char* artistIn);

  char* getTitle();
  int getYear();
  char* getCreator();
  int getDuration();
  char* getArtist();

  void print() override;
  
  ~Music();
};

#endif
