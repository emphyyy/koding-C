#include <stdio.h>
#include <math.h>
{
    int main()
    while (i != 0)
    {
    double a;
    double b;
    double c;
    printf("plaese input a = ");
    scanf("%lf", &a);
    printf("plaese input b = ");
    scanf("%lf", &b);
    printf("plaese input c = ");
    scanf("%lf", &c);
    double d = (b*b) - 4*a*c;
    float x1 = (-b + sqrt(d)) / 2*a;
    float x2 = (-b - sqrt(d)) / 2*a;
    if(d > 0)
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
    if(d < 0)
        printf("Kornei net");
    if(d == 0)
        printf("Odin koren\n");
        x2 = (-b - sqrt(d)) / (2*a);
        printf("%lf", x2);
        
    
    }
