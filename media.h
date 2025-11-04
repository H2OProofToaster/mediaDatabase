#ifdef MEDIA_H
#define MEDIA_H
#include <cstring>

class Media
{
 private:
  char title[40];
  int year;
  char creator[40];

 protected:
  Media(char titleIn[40], int yearIn, char creatorIn[40]);
  
  char getTitle() const;
  int getYear() const;
  char getCreator() const;
};

#endif
