#include <stdio.h>

char n(char *s) {
    int l = 0, r = s - 1;

    while(l < r) {
        if(s[l] != s[r]) return 0;
        l++; r--;
    }
}