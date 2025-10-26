#include<stdio.h>

int main() {
    int a, b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d" &a, &b);

    if (a > b)
    printf("Większa liczba: %d\n", a);
    else
    printf("Większa liczba: %d\n", b);
}