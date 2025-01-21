#include<stdio.h>
#include<math.h>
int main(){
    int x1 , x2 , y1 , y2;
    printf("Enter the valu of x1 , x2 , y1 , y2 : ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    float temp_D = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    float D =sqrt(temp_D);
    printf("The value of D : %.2f", D);
    return 0; 
}