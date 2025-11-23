#include<stdio.h>

int liczba(int a, int b, int c) {
    int d;
    for (d = a; ; d++) {
        int potega = 1;

        for (int i = 0; i < c; i++)
        potega *= d;

        if (potega > b)
        return d;
    }
}