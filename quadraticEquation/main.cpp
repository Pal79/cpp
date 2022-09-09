#include <iostream>
#include <cmath>

int main() {

    float a,b,c; // együtthatók


    std:: cout << "Kérlek add meg 'a' értékét: ";
    std::cin >> a;

    std:: cout << "Kérlek add meg 'b' értékét: ";
    std::cin >> b;

    std:: cout << "Kérlek add meg 'c' értékét: ";
    std::cin >> c;


    float discriminant = b*b -4*a*c; // diszkrimináns


    if(a == 0 && b == 0 && c == 0) {
        std::cout << "A helyes megoldáshoz, valós számokat adj meg!" << std::endl;
    } else if(a == 0 && b == 0 && c!= 0) {
        std::cout << "Nincs eredmény!" << std::endl;
    } else if(a == 0 && b != 0) {
        std::cout << "Elsőfokú egyenlet, csak egy megoldása van: " << -c/b << std::endl;
    } else if(discriminant < 0) {
        std::cout << "A másodfokú egyenletnek nincs valós megoldása" << std::endl;
    } else if(discriminant == 0) {
        std::cout << "A másodfokú egyenletnek, csak egy megoldása van: " << -b/(2*a) << std::endl;
    } else {
        std::cout << "A másodfokú egyenletnek két megoldása van: " << std::endl;
        std::cout << (-b + sqrt(discriminant))/(2*a) << std::endl;
        std::cout << (-b - sqrt(discriminant))/(2*a) << std::endl;
    }

}
