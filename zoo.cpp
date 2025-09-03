#include "Animal.h"
#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Dog", 1974);
   AnimalsInZoo numAnimal(animal3);
   
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal3.display();
   animal2.display();
   animal1->display();
   numAnimal.display();

   delete animal1;
}
