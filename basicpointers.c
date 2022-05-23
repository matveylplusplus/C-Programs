#include <stdio.h>

int
main ()
{
  double d = 6.6;
  int i = 3;
  char c = 'a';

  double *dp = &d;
  int *ip = &i;
  char *cp = &c;

  printf ("The address of char is 0x%x\n", cp);
  printf ("The address of int is 0x%x\n", ip);
  printf ("The address of double is 0x%x\n", dp);

  printf ("\n");

  printf ("The address of char* is 0x%x\n", &cp);
  printf ("The address of int* is 0x%x\n", &ip);
  printf ("The address of double* is 0x%x\n", &dp);

  printf ("\n");

  printf ("The value of char* is %c\n", c);
  printf ("The value of int* is %d\n", i);
  printf ("The value of double* is %lf\n", d);

  printf ("\n");

  printf ("The value of char* is 0x%x\n", cp);
  printf ("The value of int* is 0x%x\n", ip);
  printf ("The value of double* is 0x%x\n", dp);

  printf ("\n");

  printf ("The size of char is %d\n", sizeof (c));
  printf ("The size of int is %d\n", sizeof (i));
  printf ("The size of double is %d\n", sizeof (d));

  printf ("\n");

  printf ("The size of char* is %d\n", sizeof (cp));
  printf ("The size of int* is %d\n", sizeof (ip));
  printf ("The size of double* is %d\n", sizeof (dp));
}