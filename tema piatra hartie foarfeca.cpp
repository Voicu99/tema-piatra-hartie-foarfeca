// tema piatra hartie foarfeca.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 3);

    int alegere_utilizator, alegere_computer;
    std::cout << "Alege una din urmatoarele optiuni:\n";
    std::cout << "1. Piatra\n";
    std::cout << "2. Foarfeca\n";
    std::cout << "3. Hartie\n";
    std::cin >> alegere_utilizator;

    alegere_computer = dist(gen);

    std::cout << "Alegerea computerului: ";
    switch (alegere_computer) {
    case 1:
        std::cout << "Piatra\n";
        break;
    case 2:
        std::cout << "Foarfeca\n";
        break;
    case 3:
        std::cout << "Hartie\n";
        break;
    }

    std::cout << "Rezultat: ";
    switch (alegere_utilizator) {
    case 1:
        switch (alegere_computer) {
        case 1:
            std::cout << "Remiza!\n";
            break;
        case 2:
            std::cout << "Ai castigat!\n";
            break;
        case 3:
            std::cout << "Ai pierdut!\n";
            break;
        }
        break;
    case 2:
        switch (alegere_computer) {
        case 1:
            std::cout << "Ai pierdut!\n";
            break;
        case 2:
            std::cout << "Remiza!\n";
            break;
        case 3:
            std::cout << "Ai castigat!\n";
            break;
        }
        break;
    case 3:
        switch (alegere_computer) {
        case 1:
            std::cout << "Ai castigat!\n";
            break;
        case 2:
            std::cout << "Ai pierdut!\n";
            break;
        case 3:
            std::cout << "Remiza!\n";
            break;
        }
        break;
    }

    return 0;
}