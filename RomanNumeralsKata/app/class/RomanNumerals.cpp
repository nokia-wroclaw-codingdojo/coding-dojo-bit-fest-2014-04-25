#include "RomanNumerals.hpp"
using namespace std;

string RomanNumerals::Zamien(int liczba){

    string tab[1]= {"I"};
    string tmp;
    for(int i=0;i<liczba; i++)
        tmp += tab[0];
    return tmp;
}


