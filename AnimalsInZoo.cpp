#include "AnimalsInZoo.h"
#include <iostream>
AnimalsInZoo::AnimalsInZoo(const Animal& animal)
  : numAnimals(1), a(animal) {}

AnimalsInZoo::AnimalsInZoo()
    : numAnimals(0), a() {}

void AnimalsInZoo::display() const {
    std::cout << "Number of Animals: " << numAnimals << std::endl;
        a.display();
}
