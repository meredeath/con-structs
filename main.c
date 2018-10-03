#include <stdio.h>
#include <stdlib.h>
#include "pokemon.h"

int main(){
  printf("\n---------------------------\n\n");

  struct pokemon bulb = generate(5, "bulbasaur");
  printf("Newly created struct pokemon s is [level = 5, name = 'bulbasaur']\n");
  printf("Printing lvl of bulb: %d\n", bulb.level);
  printf("Printing name of bulb: %s\n", bulb.name);
  
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
