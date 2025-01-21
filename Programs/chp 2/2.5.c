#include<stdio.h>
int main(){
    int dis,time;
    printf("Enter Distance(km) : ");
    scanf("%d",&dis);
    printf("Enter Time(min) : ");
    scanf("%d",&time);

    float v=dis/time;

    printf("Speed : %.2f",v);
    return 0;
}