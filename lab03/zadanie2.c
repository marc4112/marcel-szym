#include<stdio.h>

int main() {
    float a, b;
    printf("Podaj dwie liczby: ");
    scanf("%f %f", &a, &b);

    printf("Dodawanie: %.2f\n", a + b);
    printf("Odejmowanie: %.2f\n", a - b);
    printf("Mnożenie: %.2f\n", a * b);
    printf("Dzielenie: %.2f\n", a / b);
}