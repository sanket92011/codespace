#include <stdio.h>

// Function to take input
void input(int *a, int *b) {
    printf("Enter two numbers: ");
    scanf("%d %d", a, b);
}

// Function to process addition
int process(int a, int b) {
    return a + b;
}

// Function to display output
void output(int result) {
    printf("The sum is: %d\n", result);
}

int main() {
    int num1, num2, sum;

    // Input
    input(&num1, &num2);

    // Process
    sum = process(num1, num2);

    // Output
    output(sum);

    return 0;
}
