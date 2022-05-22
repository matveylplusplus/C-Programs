#include <stdio.h>
int main( )
{
 char c = 'Z';
 char *cp = &c;
 printf("cp is %p\n", cp);
 printf("The character at cp is %c\n", *cp);
 /* Pointer arithmetic - see what cp+1 is */
 cp = cp+1;
 printf("cp is %p\n", cp);

 /* Do not print *cp, because it points to
 memory space not allocated to your program */

  //PART 2
  int i = 5;
  int* intP = &i;
  int* intP2 = intP;
  printf("First int pointer is %p and second is %p\n", intP, intP2);

  intP2++;
  printf("After incrementing second int pointer, first pointer is %p and second is %p\n", intP, intP2);

  int ans2 = ((char*)intP2-(char*)intP);//I typecast to char here because I know it's 1 byte in size. so we can do pointer arithmetic relative to bytes and not relative to the size of int
  
  printf("Byte difference between both pointers is %d, so int size is %d\n", ans2, ans2);//Will always come out to be 4 bytes!
  
  //PART 3
  double d = 5;
  double* doubleP = &d;
  double* doubleP2 = doubleP;
  printf("\nFirst double pointer is %p and second is %p\n", doubleP, doubleP2);

  doubleP2++;
  printf("After incrementing second double pointer, first pointer is %p and second is %p\n", doubleP, doubleP2);

  int ans3 = ((char*)doubleP2-(char*)doubleP);
  
  printf("Byte difference between both pointers is %d, so double size is %d\n", ans3, ans3);//Will always come out to be 8 bytes!

  //PART 4
  //what should happen is that the value of each pointer increases by 2*[size of the pointer's data type] (in bytes)
  intP2 = intP;
  doubleP2 = doubleP;
  char* cp2 = cp;

  cp2 += 2;
  intP2 += 2;
  doubleP2 += 2;

  printf("\nAfter adding by 2...\n");
  printf("cp = %p and cp2 = %p\n", cp, cp2);
  printf("intP = %p and intP2 = %p\n", intP, intP2);
  printf("doubleP = %p and doubleP2 = %p\n", doubleP, doubleP2);

  int ans4 = cp2-cp;
  printf("Byte difference between char pointers is %d and should be 2\n", ans4);
  
  ans4 = ((char*)intP2-(char*)intP);
  printf("Byte difference between int pointers is %d and should be 8\n", ans4);

  ans4 = ((char*)doubleP2-(char*)doubleP);
  printf("Byte difference between double pointers is %d and should be 16\n", ans4);
  
 return 0;
}
