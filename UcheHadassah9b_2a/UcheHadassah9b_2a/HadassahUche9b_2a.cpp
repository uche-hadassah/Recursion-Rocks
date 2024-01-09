/*Name:Uche Hadassah
This program prints the letters of the alphabets from 'a' to a given character using a recursive function
*/
#include <iostream>
using namespace std;

int main()
{
	char alpha = 'd';
	PrintLetters(alpha);
}

void PrintLetters(char ch)
{
	if (ch == 'a')//base case
		cout << ch <<",";
	else
	{
		PrintLetters(ch - 1);//Accidentally used ch-- previously
		cout << ch << ",";
	}
}