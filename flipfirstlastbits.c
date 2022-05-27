#include <stdio.h>

int main()
{
    unsigned char c1;//I'm assuming all these chars should be unsigned because otherwise the exercise would have us flip the sign bit around (as it is always the Most Significant Bit), which doesn't seem to be the spirit of the question...
    printf("Enter a character (if you enter more than one, only the first will be considered): ");
    scanf("%c", &c1);
    printf("Your character is %c, whose ASCII/integer value is therefore %d\n", c1, c1);

    unsigned char two2The7 = 128;//2^7 (Most Significant bit/MSB). I know this will always be the first bit in an 8-bit datatype
    unsigned char two2The0 = 1;//2^0 (Least Significant Bit/LSB). I know this will always be the last bit in an 8-bit datatype

    unsigned char msb = c1 & two2The7;//using & operator to see if the MSB is 1 or 0
    unsigned char lsb = c1 & two2The0;//using & operator to see if the LSB is 1 or 0
    unsigned char ans1;

    if (msb == 128)//if the MSB is 1, subtract 128 to make it 0
        ans1 = c1 - 128;
    else//if the MSB is 0, add 128 to make it 1
        ans1 = c1 + 128;

    if(lsb == 1)//if the LSB is 1, subtract 1 to make it 0
        ans1 = ans1 - 1;
    else//if the LSB is 0, add 1 to make it 1
        ans1 = ans1 + 1;

    printf("\nAfter flipping the first and last bits of %d, your number is %d, which means your final character is %c", c1, ans1, ans1);
}