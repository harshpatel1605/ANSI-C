#include<stdio.h>
int main(){
    int num;
    int res;
    printf("Enter number of which you want to printf table : ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        res=num*i;
        printf("\n%d X %d =\t%d",num,i,res);
    }
    return 0;
}