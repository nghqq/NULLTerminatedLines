#include <iostream>
#include <Windows.h>

int StringLength(const char str[]);
char* to_upper(char str[]);
char* to_lower(char str[]);
//char* shrink(char str[]);
bool is_palindrome(char str[]);


void main()
{
	setlocale(LC_ALL, "");

	//char str[] = { 'H','e','l','l','o',0 };
	//char str[] = { "Hello" };
	const int SIZE = 20;
	char str[SIZE] = {};
	std::cout << "Введите строку: ";
	//std::cin >> str;
	SetConsoleCP(1251);
	std::cin.getline(str, SIZE);// Вывод строки с пробелом
	SetConsoleCP(866);
	std::cout << str << std::endl;
	std::cout << "Длина введенной строки : " << StringLength(str) << std::endl;
	std::cout << to_upper(str) << std::endl;
	std::cout << to_lower(str) << std::endl;
	//std::cout << shrink(str) << std::endl;
	std::cout << is_palindrome(str) << std::endl;
	

	//std::cout << is_palendrom(str) << std::endl;

}

int StringLength(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}



char* to_upper(char str[]) 
{
	for (int i = 0; str[i]; i++) 
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= 32;
		if (str[i] >= 'а' && str[i] <= 'я')str[i] -= 32;
	}
	return str;
}

char* to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')str[i] += 32;
		if (str[i] >= 'А' && str[i] <= 'Я')str[i] += 32;
	}
	return str;
}



bool is_palindrome(char str[]) 
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == str[StringLength(str) - 1])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

