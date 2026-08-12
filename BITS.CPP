#include <iostream>
#include <string>

int main() 
{
    std::string input;
    int count = 0;

    std::cout << "Enter bits: ";
    std::cin >> input;

    std::cout << "Stuffed: ";
    for (char c : input) 
    {
        std::cout << c;
        if (c == '1') 
        {
            count++;
            if (count == 5) 
            {
                std::cout << '0';
                count = 0;
            }
        } else 
        {
            count = 0;
        }
    }
    std::cout << std::endl;

    return 0;
}