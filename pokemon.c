#include <stdlib.h>
#include <stdio.h>
#include "pokemon.h"

char *names[20]={"Bob","Sally","Pikachu","Susan","Harry","Charizard","Bulbosaur"};

struct pokemon generate(int lvl, char *n)
{
  struct pokemon s;
  s.level=lvl;
  s.name=n;
  return s;
}

struct pokemon * modify(struct pokemon *s, int lvl, char *n)
{
  s->level=lvl;
  s->name=n;
  return s;
}

int printStruct(struct pokemon s)
{
  printf("[level = %d, name = '%s']\n", s.level, s.name);
  return 0;
}
