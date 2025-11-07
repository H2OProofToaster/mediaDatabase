#include "movie.h"
#include <cstring>

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

Movie::~Movie()
{
  Media::~Media();
}
