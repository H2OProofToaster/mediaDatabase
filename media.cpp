#include "media.h"

Media::Media(char titleIn[40], int yearIn, char creatorIn[40])
  : title{ titleIn }
  , year{ yearIn }
  , creator{ creatorIn }
{}

char* Media::getTitle() { return title; }
int* Media::getYear() { return year; }
char* Media::getCreator() { return creator; }
