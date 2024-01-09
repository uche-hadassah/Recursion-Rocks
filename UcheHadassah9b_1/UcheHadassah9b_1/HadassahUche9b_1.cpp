/*Write a recursive function that takes a string (the message) and an integer n and prints 
the message, n times. */
#include<iostream>
using namespace std;
void print(char str[], int n)
{
	if (n == 1)
		cout << str;
	else
	{
		cout << str << endl;
		return print(str, n - 1);
	}
}
int main()
{
	char string[] = "Hadassah is a genius";
	int n = 5;
	print(string, n);
}