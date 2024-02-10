#include <stdio.h>
#include <math.h>
#include "main.h"

#define PI 3.14

double circleArea(double radius){

    return(pow(radius, 2) * PI);
}

int main(void){

    double radius;

    printf("Enter any number: ");
    scanf("%lf", &radius);

    double area = circleArea(radius);

    printf("%.2lf\n", area);

    return(0);
}