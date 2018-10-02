#include <stdlib.h>
#include <stdio.h>
#include "pokemon.h"

char *names[20]={"Bob","Sally","Pikachu","Susan","Harry","Charizard","Bulbosaur"};

struct pokemon generate(int l, char *n){
  struct pokemon s;
  s.level=l;
  s.name=n;
  return s;
}

struct pokemon modify(struct pokemon s, int l, char *n){
  struct pokemon *p = &s;
  p->level=l;
  p->name=n;
  return s;
}
