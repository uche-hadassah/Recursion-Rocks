/*Name:Uche Hadassah
This program calculates the sum of even squares of integers from 0 to n inclusive.*/
#include<iostream>
using namespace std;
int SumEvenSq(int n);

int main()
{
	int num = 7;
	cout << "The sum of even squares is:" << SumEvenSq(num);
}

int SumEvenSq(int n)
{
	if (n <= 0)//base case
		return 0;
	else if (n % 2 == 0)//if n is even
		return n * n + SumEvenSq(n - 2);
	else//if n is not even, it makes it even
		return SumEvenSq(n - 1);
}