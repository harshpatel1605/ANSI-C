#include<stdio.h>
#include<math.h>
int main(){
    int x1 , x2 , y1 , y2;
    x1=2;
    y1=2;
    x2=5;
    y2=6;
    float temp_r = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    float r =sqrt(temp_r);
    printf("Area of Circle is: %f",(3.14*r*r));
    return 0; 
}