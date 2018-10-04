#include <stdio.h>
#include <stdlib.h>
#include "pokemon.h"

int main(){
  printf("\n---------------------------\n\n");

  printf("Creating new struct pokemon bulb with level = 5 and name = 'bulbasaur'\n");
  struct pokemon bulb = generate(5, "bulbasaur");
  printf("Printing lvl of bulb: %d\n", bulb.level);
  printf("Printing name of bulb: %s\n", bulb.name);

  printf("\n\n");

  printf("Creating new struct pokemon charm with level = 11 and name = 'charmander'\n");
  struct pokemon charm = generate(11, "charmander");
  printf("Printing lvl of charm: %d\n", charm.level);
  printf("Printing name of charm: %s\n", charm.name);


  printf("\n---------------------------\n\n");

  modify(&bulb, 10, "venasaur");
  printf("Modifying bulb to [level = 10, name = 'venasaur']\n");
  printf("Printing lvl of bulb: %d\n", bulb.level);
  printf("Printing name of bulb: %s\n", bulb.name);

  printf("\n---------------------------\n\n");

  printf("Printing bulb using print function\n");
  printStruct(bulb);

  printf("\n---------------------------\n\n");

  return 0;
}
