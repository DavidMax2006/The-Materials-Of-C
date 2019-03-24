#include <stdio.h>

#define PI 3.1415926

int main(int argc, char const *argv[]) {
  float r = 2.56;
  float l,s;

  l = 2*PI*r;
  s = PI*r*r;
  printf("l=%f\n", l);
  printf("s=%f\n", s);
  return 0;
}
