#include <stdio.h>

#ifndef Radius
#define Radius 14
#endif

int main(void){
    #ifdef Radius
        printf("The Macro Radius was defined with a value of %d", Radius);
    #else
       printf("The Macro Radius was not defined");
       #define Radius 14
    #endif
}