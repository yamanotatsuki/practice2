#include<stdio.h>
int main(void)
{
    double x;
    
    printf("半径は:");
    scanf("%lf",&x);

    printf("円の面積は%fです。",3.14*x*x);

    return 0;
}