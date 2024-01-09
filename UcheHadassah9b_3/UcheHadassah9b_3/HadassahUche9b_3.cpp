/*Write a recursive function that takes as a parameter an integer n and returns the sum 
of even squares of integers from 0 to n inclusive. For example: SumEvenSq(7) should 
return 56 (i.e. 2*2+4*4+6*6). The same answer should be returned for 
SumEvenSq(6)*/
#include<iostream>
using namespace std;

int SumEvenSq(int n)
{
	if (n <= 0)
		return 0;
	else if (n % 2 == 0)
		return n * n + SumEvenSq(n - 2);
	else
		return SumEvenSq(n - 1);
}
int main()
{
	int num = 7;
	cout << "The sum of even squares is:" << SumEvenSq(num);
}