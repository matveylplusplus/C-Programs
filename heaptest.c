#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void runMe(){
  int bobo = 7;
   int* leakingPtr = (int*) malloc(sizeof(int)*1024);
   printf("leakingPtr is equal to 0x%x\n", leakingPtr);
   printf("leakingPtr is at address 0x%x\n", &leakingPtr);

   for(int i=0;i<1024;i++)
   {
     leakingPtr[i] = i+1000;
     printf("leakingPtr[%d] = %d at 0x%x\n", i, leakingPtr[i], &leakingPtr[i]);
   }
 }

 void runMe2(){
   int nono;
   printf("nono = %d\n", nono);

   int* leakingPtr;
   printf("leakingPtr is equal to 0x%x\n", leakingPtr);
   printf("leakingPtr is at address 0x%x\n", &leakingPtr);
   
   printf("leakingPtr[4] = %d\n", leakingPtr[4]);
   printf("leakingPtr[450] = %d\n", leakingPtr[450]);
   printf("leakingPtr[0] = %d\n", leakingPtr[0]);
   printf("leakingPtr[1023] = %d\n", leakingPtr[1023]);
 }

int main()
{
    runMe();
    runMe2();
    char* p =  malloc(20);//should allocate 16 bytes in heap
    printf("Pre-free\n");
    for(int i = 0; i < 20; i++)
    {
      printf("p[%d] = %c\n", i, p[i]);
    }
    free(&p[10]);

    printf("Post-free\n");
    for(int i = 0; i < 20; i++)
    {
      printf("p[%d] = %c\n", i, p[i]);
    }
}