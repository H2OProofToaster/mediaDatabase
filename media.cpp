#include "media.h"

Media::Media(char titleIn[40], int yearIn, char creatorIn[40])
  : title{ titleIn }
  , year{ yearIn }
  , creator{ creatorIn }
{}

Media::getTitle() const { return title; }
Media::getYear() const { return year; }
Media::getCreator() const { return creator; }
