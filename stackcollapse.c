#include <stdio.h>

void foo1(int xval)
{
 int x;
 x = xval;
 /* print the address and value of x here */
 printf("x: %d\n", x);
 printf("Address of x: 0x%x\n", &x);
}

void foo2(int dummy)
{
 int y;

 /* print the address and value of y here */
 printf("y: %d\n", y);
 printf("Address of y: 0x%x\n", &y);
}
int main()
{
 foo1(7);
 foo2(11);
 return 0;
}