#include <iostream>
using namespace std;

int sumDigits(int number);
int main()
{
	int n;
	cout << "Please, enter an integer: " << endl;
	cin >> n;
	while (n > 9)
	{
		n = sumDigits(n);
	}
	cout << "The result is " << n;
	char c;
	cin >> c;
	return 0;
}

int sumDigits(int number) {
	
	int digit, 
	int sum=0;
	while (number > 0)
	{
		digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	}
	return sum;
}
