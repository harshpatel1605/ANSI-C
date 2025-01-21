#include<stdio.h>
int add(int,int);
int sub(int,int);
int main(){
    int num1,num2;
    printf("Enter two num : ");
    scanf("%d %d",&num1,&num2);
    printf("%d + %d =%d",num1,num2,add(num1,num2));
    printf("\n%d - %d =%d",num1,num2,sub(num1,num2));
    return 0;
}

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}