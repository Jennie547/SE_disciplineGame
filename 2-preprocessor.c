#include <stdio.h>
#define VALUE 1

int printNumber(int *number) {
    int originalNumber = *number;  // Store the original value of number

    #if VALUE == 1
        while (*number < 10) {
            (*number)++;
        }
    #endif

    return (*number - originalNumber);  // Return the difference between the modified number and the original number
}

int main(void) {
    int number;

    printf("Enter a whole number: ");
    scanf("%d", &number);

    int result = printNumber(&number);

    printf("%d\n", number);
    printf("NOTE: you added %d to make the value of number 10\n", result);

    return (0);
}