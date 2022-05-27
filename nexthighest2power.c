#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int input;//again, assuming this int should be unsigned because that's kind of the vibe I'm getting
    printf("Give me an integer plz: ");
    scanf("%u", &input);

    unsigned int bitCheck;
    int i = 32;

    do //keep decrementing i until you either hit the highest bit that's 1 or hit 0
    {
        i--;
        bitCheck = (int)pow(2, i);//set equal to 2^31, 2^30, 2^29, 2^28, and so forth until 2^0 is hit
    } while( ((input & bitCheck) != bitCheck) && (i >= 0) );

    unsigned int ans = (int)pow(2, i+1);
    printf("\nThe next highest power of 2 from %u is %u.", input, ans);
}