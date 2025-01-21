#include<stdio.h>
int main(){
    int a,b,c;
    float x;
    printf("Enter the Value of a : ");
    scanf("%d",&a);
     printf("Enter the Value of b : ");
    scanf("%d",&b);
     printf("Enter the Value of c : ");
    scanf("%d",&c);
    x=a/(b-c);
    printf("Ans :%.2f",x);
    return 0;
}