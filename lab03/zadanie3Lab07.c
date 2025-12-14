#include<stdio.h>

int main(){
void wypisz(int n) {
    if (n==0)
    return;
wypisz(n-1);
printf("%d ", n);
}
}