#include "media.h"
#include "videoGame.h"
#include <cstring>
#include <iostream>

int main()
{
  char title[40] = "TestName";
  int year = 2025;
  char creator[40] = "NickH";
  int rating = 5;
  
  VideoGame* test = new VideoGame(title*, year*, creator*, rating*);

  std::cout << test->getTitle() << test->getYear() << test->getCreator() << test->getRating();

  return 0;
}
