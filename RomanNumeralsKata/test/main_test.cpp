#include <iostream>
#include "class/RomanNumerals.hpp"
using namespace std;
int main()
{
    RomanNumerals obiekt;
    string testowa;
    int i=0;
    int tabKlucze[4] = {1, 2, 3, 5};
    string tab[4] = { "I", "II", "III", "V"};

    while(i<4)
    {
        i++;
        testowa=obiekt.Zamien(i);
        if (testowa!=tab[i-1])
        {
           cout << "BLAD " << i << endl;
           return 0;
        }
    }
    cout << "OK" << endl;
}
