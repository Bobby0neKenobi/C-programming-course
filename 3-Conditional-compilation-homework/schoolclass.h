#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H
    #include "person.h"
    struct SchoolClass{
      struct Person person[26];
      int classNumber;
      char classSymbol;
      struct Person teacher;

    };
#endif