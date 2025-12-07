#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return b != 0 ? a / b ? : 0; }

int main() {
float a, b;
int choice;

printf("Podaj dwie liczby: ");
scanf("%f %f", &a, &b);

printf("Wybierz działanie:\n1. Dodawanie\n2 Odejmowanie\n3 Mnożenie\n4 Dzielenie\n");
scanf("%d", &choice);

switch(choice) {
    case 1: printf("Wynik dodawania: %.2f\n", add(a, b)); break;
    case 2: printf("Wynik odejmowania: %.2f\n", sub(a, b)); break;
    case 3: printf("Wynik mnożenia: %.2f\n", mul(a, b)); break;
    case 4: printf("Wynik dzielenia: %.2f\n", divi(a, b)); break;
    default: printf("Złe liczby\n");
}
}