#include "prime.h"

int main()
{
    setlocale(LC_ALL,"hun");

    int num;

    std::cout << "Kérem írhójon be egy számot, hogy megtudja, prímszám e: ";
    std::cin >> num;
    isPrime(num);

    std::cout << std::endl;

    std::cout << "Kérem adjon meg egy számot, hogy megtudja, mely prímszámok vannak 1 és az ön által adott szám között: ";
    std::cin >> num;
    primesWriteOut(num);
}
