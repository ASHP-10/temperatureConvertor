#include <bits/stdc++.h>
#include <iostream>
#include "fahrenheit.cpp"
#include "celsius.cpp"
#include "kelvin.cpp"

int main()
{
    char choice;
    float temp;
    
    std::cout << "Enter the temperature in:\nC\nF\nK\n";
    std::cin >> choice;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(choice == 'c' || choice == 'C') {
        float fahrenheit = Celsius::toF(temp);;
        float kelvin = Celsius::toK(temp);

        std::cout << "Temperature in F: " << fahrenheit;
        std::cout << std::endl;
        std::cout << "Temperature in K: " << kelvin;
    } else if (choice == 'f' || choice == 'F') {
        float celsius = Fahrenheit::toC(temp);
        float kelvin = Fahrenheit::toK(temp);

        std::cout << "Temperature in C: " << celsius;
        std::cout << std::endl;
        std::cout << "Temperature in K: " << kelvin;
    } else if (choice == 'k' || choice == 'K') {
        float celsius = Kelvin::toC(temp);
        float fahrenheit = Kelvin::toF(temp);

        std::cout << "Temperature in C: " << celsius;
        std::cout << std::endl;
        std::cout << "Temperature in F: " << fahrenheit;
    }

    return 0;
}