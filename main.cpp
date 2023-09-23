#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Rosszul van írva változó név
    std::cout << '1-100 ertekek duplazasa' // Nincs ';' jel a végén és aposztróf helyett idézőjel
    for (int i = 0;) //for ciklusban feltételek hiányoznak
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // for ciklusban hiányzo feltétel
    {
        std::cout << "Ertek:" //Érték megadása hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Nincs kezdőérték
    for (int i = 0; i < N_ELEMENTS, i++) // ',' helyett ';' jell kell
    {
        atlag += b[i] //Sorvégéről jiányzik a ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // delete [] b hiányzik
    return 0;
}
