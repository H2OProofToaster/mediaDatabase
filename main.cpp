#include "media.h"
#include "videoGame.h"
#include <cstring>
#include <iostream>

int main()
{
  char title[] = "TestName";
  int year = 2025;
  char creator[] = "NickH";
  int rating = 5;
  
  VideoGame* test = new VideoGame(title, year, creator, rating);

  std::cout << test->getTitle() << test->getYear() << test->getCreator() << test->getRating();

  return 0;
}
