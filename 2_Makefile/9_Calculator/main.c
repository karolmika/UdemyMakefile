#include <stdio.h>
#include "calculator.h"

int main(void)
{
    uint8_t number1 = 5;
    uint8_t number2 = 6;

    printf("*** Calculator demo app. ***\n");
    printf("The result of adding two numbers: %d\n", calculator_add(number1,number2));
    printf("The result of subtracting two numbers: %d\n", calculator_subtract(number1,number2));
}