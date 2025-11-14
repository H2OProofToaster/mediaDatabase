#ifndef MEDIA_H
#define MEDIA_H
#include <cstring>

class Media
{
 private:
  char* title = new char[40];
  int year;
  char* creator = new char[40];

 protected: 
  Media(char* titleIn, int yearIn, char* creatorIn);
  
 public:
  char* getTitle();
  int getYear();
  char* getCreator();

  void virtual print();
  
  ~Media();
  
};

#endif
