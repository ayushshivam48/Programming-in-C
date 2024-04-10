// write a program in c to convert fahrenheit into celsius accurately

#include <stdio.h>
#include <math.h>

int main()
{
    float fahr, celsius;

    printf("Enter a temperature in fahrenheit: ");
    scanf("%f", &fahr);

    celsius = (fahr - 32) * 5 / 9;

    printf("The temperature in celsius is %f\n", celsius);

    return 0;
}