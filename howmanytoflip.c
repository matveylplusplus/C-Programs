#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int input1;//again, assuming this int should be unsigned because that's kind of the vibe I'm getting
    unsigned int input2;
    printf("Give me an integer: ");
    scanf("%u", &input1);
    printf("\nGive me a second integer: ");
    scanf("%u", &input2);

    unsigned int afterXOR = (input1 ^ input2);//this will yield a number whose 1's indicate bit differences between input1 and input2. From here, we just count the 1's!

    unsigned int ans;
    unsigned int bitCheck;

    for (int i = 31; i >= 0; i--)
    {
        bitCheck = (int)pow(2, i);//set equal to 2^31, 2^30, 2^29, 2^28, and so forth until 2^0 is hit
        if ((afterXOR & bitCheck) == bitCheck)//If the bitwise AND operator ever yields bitCheck, we know that a 1 exists at the bit bitCheck is currently on.
            ans++;//so we increment
    }
    printf("\nYou need to flip %u bits to turn %u into %u and vice versa.", ans, input1, input2);
}