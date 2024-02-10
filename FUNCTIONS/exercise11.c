#include <stdio.h>
#include "main.h"

int sum(int a, int b){
    return (a+b);
}

int main(void){

    int num1, num2;

    printf("Enter 2 whole numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = sum(num1, num2);

    printf("%d + %d = %d\n", num1, num2, result);

    return(0);
}