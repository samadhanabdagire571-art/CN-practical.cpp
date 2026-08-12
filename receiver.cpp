#include <iostream>
#include <string>

int main()
{
    std::string input;
    int count = 0;

    std::cout << "Enter received bits: ";
    std::cin >> input;

    std::cout << "Destuffed: ";

    for (int i = 0; i < input.length(); i++)
    {
        char c = input[i];

        std::cout << c;

        if (c == '1')
        {
            count++;

            if (count == 5)
            {
                i++;          // Skip the stuffed 0
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }

    std::cout << std::endl;

    return 0;
}