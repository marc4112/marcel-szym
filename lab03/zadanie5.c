#include<stdio.h>

int main(){
    char znak;
    printf("Podaj znak: ");
    scanf(" %c", &znak);

    if ((znak>= 'a' && znak <= 'z') || (znak >= 'A' && znak <= 'Z'))
    printf("Znak '%c' jest literą alfabetu.\n", znak);
    else 
    printf("Znak '%c' nie jest literą alfabetu.\n", znak);
}