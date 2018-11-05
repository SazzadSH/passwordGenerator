/*
This particular simple program can be used to generate random passwords.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string passGen(int len)
{
    std::string password = "";
    int chr;
    if(len == -1)
    {
        len = (rand() % 19) + 6;
    }

    for(int i = 0; i < len; i++)
    {
        chr = (rand() % 95) + 32;
        password += chr;
    }

    return password;
}

int main()
{
	srand((int)time(0));

	int length;

	std::cout << "Length (Enter -1 for random length): ";

	std::cin >> length;

	std::cout << std::endl;

    std::cout << "Generated Password:" << std::endl << passGen(length) << std::endl;

	return 0;
}
