// The farmer's fencing problem
#include <stdio.h>

int main() {
    int length, width;

    // Asking user for inputs
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculations
    int area = length * width;
    int perimeter = 2 * (length + width);

    // Output
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
