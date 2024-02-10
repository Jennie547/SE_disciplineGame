#include <stdio.h>
#define radius 4

int main(void)
{

    #ifdef radius
        printf("%d", radius);
    #else
        printf("ERROR");
    #endif

}