// Pattern_search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include<iostream>
//set a particular bit
int setbit(int number, int bit_to_set)
{
	int mask = 1 << bit_to_set;
	int target = number | mask;//OR
	return target;
}
//reset a particular bit
int clearbit(int number, int bit_to_clear)
{
	int mask = ~(1 << bit_to_clear);
	int target = number& mask;//AND
	return target;
}
//toggle particular bit
int togglebit(int number, int bit_to_toggle)
{
	int mask = (1<<bit_to_toggle);
	int target = number^mask;//XO
	return target;
}
//check whether bit is set or not
int checkingbit(int number, int bit_to_check)
{
	int mask = 1 << bit_to_check;
	
	int target = number&mask;
	
	return target;

}
//search for  a particular string inside a text
int searchstring(char pattern[], char text[])
{
	int j;
	int patternlength = strlen(pattern);
	int textlength = strlen(text);
	for (int i = 0; i < textlength - patternlength; i++)
	{
		for (j = 0; j < patternlength; j++)
		{
			if (text[i + j] != pattern[j])break;
		}

			if (j == patternlength)
				return i;
	
	}
	return -1;
}
//
int _tmain(int argc, _TCHAR* argv[])
{
	int number = 0X0;
	
	std::cout<<setbit(number, 2);


	return 0;
	char ch = 'a'^'b';
	std::cout <<ch;
	return 0;
	char string[11] = "A nice cat";
	char key[11] = "ABCDEFGHIJ";
	for (int x = 0; x<10; x++)
	{
		string[x] = string[x] ^ key[x];
		std::cout << string[x];
	}
	std::cout << std::endl;
	for (int x = 0; x<10; x++)
	{
		string[x] = string[x] ^ key[x];
		std::cout << string[x];
	}
	return 0;
	char text[] = "";
	char pattern[] = "inside this";
	int index = searchstring(pattern,text);
	if (index == -1)
		printf("string not found");
	else
		printf("Index of the string is %d", index);

	return 0;
}

