#include<stdio.h>

int main(){
    int suma(int n){
        if(n==0)
        return 0;
    return n % 10 + suma(n / 10);
    }
}