/*Name: Uche Hadassah
This program uses a recursive function to print a string n number of times 
*/
#include<iostream>
using namespace std;

int main()
{
	char string[] = "Hadassah is a genius";
	int n = 5;
	print(string, n);
}

void print(char str[], int n)
{
	if (n == 1)//base case
		cout << str;
	else
	{
		cout << str << endl;//output before recursive call
		return print(str, n - 1);//recursive call
	}
}