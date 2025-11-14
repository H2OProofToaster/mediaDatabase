#include "media.h"
#include <cstring>
#include <iostream>

Media::Media(char* titleIn, int yearIn, char* creatorIn)
  : year{ yearIn }
{
  strcpy(title, titleIn);
  strcpy(creator, creatorIn);
}

char* Media::getTitle() { return title; }
int Media::getYear() { return year; }
char* Media::getCreator() { return creator; }

void Media::print()
{
  std::cout << "Title: " << title << std::endl << "Year: " << year << std::endl << "Creator: " << creator << std::endl;
}

Media::~Media()
{
  delete title;
  delete creator;
}
