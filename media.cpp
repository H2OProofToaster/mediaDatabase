#include "media.h"
#include <cstring>

Media::Media(char* titleIn, int yearIn, char* creatorIn)
  : year{ yearIn }
{
  strcpy(title, titleIn);
  strcpy(creator, creatorIn);
}

char* Media::getTitle() { return title; }
int Media::getYear() { return year; }
char* Media::getCreator() { return creator; }

Media::~Media()
{
  delete title;
  delete creator;
}
