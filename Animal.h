#ifndef animal_h
#define animal_h
#include <iostream>
#include <stdlib.h>

class Animal {
   public:
  Animal(std::string speciesName, unsigned int discoveryYear);
Animal();
void display() const;

private:
  std::string species;
  unsigned int year_discovered;
};
#endif
