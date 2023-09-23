#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //Változó név rosszul van írva
    std::cout << "1-100 ertekek duplazasa"; // Nincs ';' jel a végén és aposztróf helyett idézőjel
    for (int i = 0; i<N_ELEMENTS; i++) //for ciklusban feltételek hiányoznak
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) // for ciklusban hiányzo feltétel
    {
        std::cout << "Ertek:" << b[i] << std::endl; //Érték megadása hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; // Nincs kezdőérték
    for (int i = 0; i < N_ELEMENTS; i++) // ',' helyett ';' jell kell
    {
        atlag += b[i]; //Sorvégéről jiányzik a ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete [] b; //Hiányzik a delete [] b
    return 0;
}
