#include<stdio.h>
#include<math.h>
int main(){
    int a , b , c;
    float s;
    printf("Enter a  b & c : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    s = (a+b+c)/2;
    float temp_A = s*(s-a)*(s-b)*(s-c);
   float  A = sqrt(temp_A);

   printf("Area of triangle is : %.2f", A);
   return 0;
}