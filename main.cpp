#include "videoGame.h"
#include <cstring>
#include <iostream>

int main()
{
  VideoGame test("TestName", 2025, "NickH", 5);

  std::cout << test.getTitle() << test.getYear() << test.getCreator() << test.getRating();

  return 0;
}
