#include <stdio.h>
#include <stdlib.h>
#include "pokemon.h"

int main(){
  int i=1;
  char str1[50]="Bulbasaur";
  struct pokemon a = generate(i,str1);
  return 0;
}
