/*b) Modify the function above so that it prints the alphabet in reverse starting from the 
character, all the way back to ‘a’. For example: The call PrintLettersReverse(‘k’) 
should output: kjihgfedcba*/
#include<iostream>
using namespace std;
void PrintLetters(char ch);
int main()
{
	char alpha = 'd';
	PrintLetters(alpha);
}

void PrintLetters(char ch)
{
	if (ch == 'a')//base case
		cout << ch << ",";
	else
	{
		PrintLetters(ch - 1);//Accidentally used ch-- previously
		cout << ch << ",";
	}
}