#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int reverse=0;
    while (n>0)
    {
        reverse *= 10;
        reverse += n % 10;
        n /= 10;
    }
    printf("%d", reverse);
}


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int reverse=0;
//     int digit;
//     while (n>0)
//     {
//         digit= n%10;
//         reverse = reverse*10+digit;
//         n = n/10;
//     }
//     printf("%d", reverse);
// }
