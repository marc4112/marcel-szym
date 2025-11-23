#include <stdio.h>

int suma_kwadratow(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++)
    suma += i * i;
return suma;
}