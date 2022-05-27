#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int input;//again, assuming this int should be unsigned because that's kind of the vibe I'm getting
    printf("Give me an integer plz: ");
    scanf("%u", &input);

    unsigned int ans;
    unsigned int bitCheck;

    for (int i = 31; i >= 0; i--)
    {
        bitCheck = (int)pow(2, i);//set equal to 2^31, 2^30, 2^29, 2^28, and so forth until 2^0 is hit
        if ((input & bitCheck) == bitCheck)//If the bitwise AND operator ever yields bitCheck, we know that a 1 exists at the bit bitCheck is currently on.
            ans++;//so we increment
    }
    printf("\nThere are %u 1's in %u.", ans, input);
}