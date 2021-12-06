#include <stdio.h>
#include <math.h>
#define PI 3.14159265


double CircleArea(double r){
    double a;
    a = PI*pow(r, 2.0);
    return a;
}

int main(void){
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    double area = CircleArea(radius);

    printf("The area of circle with radius %.2lf is %.2lf\n", radius, area);
    return(0);
}
