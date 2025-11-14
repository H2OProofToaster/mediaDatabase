#include "movie.h"
#include <cstring>
#include <iostream>

Movie::Movie(char* titleIn, int yearIn, char* creatorIn, int durationIn, int ratingIn)
  : Media::Media{ titleIn, yearIn, creatorIn }
  , duration{ duration }
  , rating{ rating }
{}

char* Movie::getTitle() { return Media::getTitle(); }
int Movie::getYear() { return Media::getYear(); }
char* Movie::getCreator() { return Media::getCreator(); }
int Movie::getDuration() { return duration; }
int Movie::getRating() { return rating; }

void Movie::print()
{
  this->Media::print();
  std::cout << "Duration: " << duration << std::endl << "Rating: " << rating << std::endl;
}

Movie::~Movie()
{
  Media::~Media();
}
