#include<stdio.h>
int main(){
    int n;
    float sum=1.00;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=2 ; i<=n;i++){
        sum=sum+1.00/i;
    }
    printf("Sum is: %f",sum);
    return 0;
}