#include <stdio.h>

int
main ()
{
  int normalInt = 1000;

  double normalDouble = 3.14;

  short int small = -100;                      // smaller int
  unsigned int count = 25;                     // only positive int
  long int big = 1234567890;                   // larger int
  long long int veryBig = 9223372036854775807; // very large int
  unsigned long long int huge
      = 18446744073709551615U;                 // very large, only positive
  long double precise = 3.141592653589793238L; // extended precision

  printf ("Normal int: %d, size: %zu bytes\n", normalInt, sizeof (normalInt));
  printf ("Normal double: %lf, size: %zu bytes\n", normalDouble,
          sizeof (normalDouble));
  printf ("Small: %hd, size: %zu bytes\n", small, sizeof (small));
  printf ("Count: %u, size: %zu bytes\n", count, sizeof (count));
  printf ("Big: %ld, size: %zu bytes\n", big, sizeof (big));
  printf ("Very big: %lld, size: %zu bytes\n", veryBig, sizeof (veryBig));
  printf ("Huge: %llu, size: %zu bytes\n", huge, sizeof (huge));
  printf ("Precise: %Lf, size: %zu bytes\n", precise, sizeof (precise));

  return 0;
}
