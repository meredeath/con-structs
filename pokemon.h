
struct pokemon {int level; char *name;};

struct pokemon generate(int lvl, char *n);
struct pokemon * modify(struct pokemon *s, int lvl, char *n);
int printStruct(struct pokemon s);
