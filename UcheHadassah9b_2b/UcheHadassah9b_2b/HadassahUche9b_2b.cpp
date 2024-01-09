/*Name:Uche Hadassah
This program prints the letters of the alphabets from a given character to 'a' using a recursive function
*/
#include<iostream>
using namespace std;
void PrintLettersReverse(char ch);//Function prototype
int main()
{
	char alpha = 'd';
	PrintLettersReverse(alpha);
}

void PrintLettersReverse(char ch)
{
	if (ch == 'a')//base case
		cout << ch << ",";
	else
	{
		cout << ch << ",";
		PrintLettersReverse(ch - 1);//Recursive call
	}
}