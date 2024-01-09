/*
a) Write a recursive function that takes as parameter a character ch and prints the 
alphabet starting at the character ‘a’ and ending at the character ch. For example: The 
call PrintLetters(‘k’) should output: abcdefghijk, whereas PrintLetters(‘d’) outputs: 
abcd.
*/
#include <iostream>
using namespace std;
void PrintLetters(char ch)
{
	if (ch == 'a')
		cout << ch;
	else
		PrintLetters(ch - 1);
	cout << ch << ",";
}

int main()
{
	char alpha = 'd';
	PrintLetters(alpha);
}