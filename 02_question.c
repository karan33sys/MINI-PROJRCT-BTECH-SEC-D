// Chef’s Temperature Converter


#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Taking input from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Printing result rounded to 2 decimal places
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
