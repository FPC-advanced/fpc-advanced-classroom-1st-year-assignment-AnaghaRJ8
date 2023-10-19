#include <stdio.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float number, sqrt_result;

    number = input();

    sqrt_result = square_root(number);

    output(number, sqrt_result);

    return 0;
}

float input() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}

float square_root(float n) {
    return sqrt(n);
}

void output(float n, float sqrroot) {
    printf("Square root of %.2f is %.2f\n", n, sqrroot);
}