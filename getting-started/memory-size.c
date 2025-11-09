#include <stdio.h>

int
main ()
{
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  printf ("Size of myInt: %zu\n", sizeof (myInt));
  printf ("Size of myFloat: %zu\n", sizeof (myFloat));
  printf ("Size of myDouble: %zu\n", sizeof (myDouble));
  printf ("Size of myChar: %zu\n", sizeof (myChar));

  return 0;
}
