#include <stdio.h>
int main()
{
    int num;
    int i;
    int positive = 0, negative = 0;
    for (;;)
    {
        printf("Enter num:");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        if (num > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    printf("Positive integer: %d\n", positive);
    printf("Negative integer: %d\n", negative);
    return 0;
}