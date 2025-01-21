#include<stdio.h>
int main(){
    int x, y;
    printf("Enter x And y : ");
    scanf("%d %d",&x , &y);
    printf("Sum     : %d  ",x+y);
    printf("Difference : %d\n",x-y);
    printf("Product : %d  ",x*y);
    printf("Division   : %d",x/y);
    return 0;
}