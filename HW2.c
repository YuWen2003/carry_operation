#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two three-digit integers: ");
    scanf("%d %d", &num1, &num2);

    // Separate digits of num1 and num2
    int num1_units = num1 % 10;
    int num1_tens = (num1 / 10) % 10;
    int num1_hundreds = num1 / 100;

    int num2_units = num2 % 10;
    int num2_tens = (num2 / 10) % 10;
    int num2_hundreds = num2 / 100;

    int carry = 0; // counter for carries
    int sum_units, sum_tens, sum_hundreds;

    // Add the units digits
    sum_units = num1_units + num2_units;
    if (sum_units >= 10) {
        carry++;
        sum_units %= 10;
    }

    // Add the tens digits with carry from units digits
    sum_tens = num1_tens + num2_tens + carry;
    if (sum_tens >= 10) {
        carry++;
        sum_tens %= 10;
    }

    // Add the hundreds digits with carry from tens digits
    sum_hundreds = num1_hundreds + num2_hundreds + carry;
    if (sum_hundreds >= 10) {
        carry++;
    }

    printf("Total number of carries: %d\n", carry);

    return 0;
}
