#include <stdio.h>

void input(int *a, int *b) {
    printf("Enter two numbers: ");
    scanf("%d %d", a, b);
}

int process(int a, int b) {
    return a + b;
}

void output(int result) {
    printf("The sum is: %d\n", result);
}

int main() {
    int num1, num2, sum;

    input(&num1, &num2);
    sum = process(num1, num2);
    output(sum);

    return 0;
}
