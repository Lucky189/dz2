#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "Привіт світе!\n";
    std::cout << "Мы здесь\n";

    return 0;
}