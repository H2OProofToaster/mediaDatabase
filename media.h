#ifndef MEDIA_H
#define MEDIA_H
#include <cstring>

class Media
{
 private:
  char title[40];
  int year;
  char creator[40];

 protected: 
  Media(char* titleIn, int yearIn, char* creatorIn);
  
 public:
  char* getTitle();
  int getYear();
  char* getCreator();
  ~Media();
  
};

#endif
