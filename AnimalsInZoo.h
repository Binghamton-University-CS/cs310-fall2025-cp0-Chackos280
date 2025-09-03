#ifndef AnimalsInZoo_
#define AnimalsInZoo_
#include "Animal.h"

class AnimalsInZoo {
 private:
  unsigned int numAnimals;
  Animal a;
 public:
  AnimalsInZoo(const Animal& a);
  AnimalsInZoo();
  void display() const;

};
#endif
