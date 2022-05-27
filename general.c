#include <stdio.h>

int main()
{
    char boo = 128;
    unsigned char c = 128;
    signed char c2 = 128;

    printf("boo = %c, c = %c, c2 = %c\n", boo, c, c2);
    printf("boo = %d, c = %d, c2 = %d\n", boo, c, c2);

    int i = -128;
    unsigned int i2 = -128;
    signed int i3 = -128;
    
    /*
    printf("i = %d, i2 = %d, i3 = %d\n", i, i2, i3);
    printf("i = %u, i2 = %u, i3 = %u\n", i, i2, i3);
    printf("i = %lu, i2 = %lu, i3 = %lu\n", i, i2, i3);
    printf("i = %ld, i2 = %ld, i3 = %ld\n", i, i2, i3);
    */

    i = i << 2;
    i2 = i2 << 2;
    i3 = i3 << 2;

    printf("i = %d, i2 = %d, i3 = %d\n", i, i2, i3);
    printf("i = %u, i2 = %u, i3 = %u\n", i, i2, i3);
    printf("i = %lu, i2 = %lu, i3 = %lu\n", i, i2, i3);
    printf("i = %ld, i2 = %ld, i3 = %ld\n", i, i2, i3);

    printf("\n");

    i = -128;
    i2 = -128;
    i3 = -128;

    i = i >> 2;
    i2 = i2 >> 2;
    i3 = i3 >> 2;

    printf("i = %d, i2 = %d, i3 = %d\n", i, i2, i3);
    printf("i = %u, i2 = %u, i3 = %u\n", i, i2, i3);
    printf("i = %lu, i2 = %lu, i3 = %lu\n", i, i2, i3);
    printf("i = %ld, i2 = %ld, i3 = %ld\n", i, i2, i3);
    /*
    int bo = 86720;
    
    printf("bo = %c, boo = %c\n", bo, boo);

    int n = 0;

    for(int i = 0; i < 400; i++)
    {
        boo = i;
        printf("%d = %c, ", i, boo);
        n++;
        if(n == 15)
        {
            printf("\n");
            n = 0;
        }            
    }
    printf("\n\n");

    n = 0;
    for(signed char i = -127; i < 127; i++)
    {
        c2 = i;
        printf("%d = %c, ", i, c2);
        n++;
        if(n == 15)
        {
            printf("\n");
            n = 0;
        }
    }
    */
}