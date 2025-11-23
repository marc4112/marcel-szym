#include<stdio.h>

vector<int> tablica(const vector<int>& tab) {
    vector<int> wynik(tab.size());
    for (size_t i = 0; i < tab.size(); i++)
    wynik[i] = tab[i] * tab[i];
}