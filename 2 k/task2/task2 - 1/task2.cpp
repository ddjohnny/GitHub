// task21.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include "funcs.h"

using namespace std;

int main()
{
	int n = 0;
	cout << "Enter number:" << " ";
	cin >> n;

	while (true) {
		int mode = 0;

		cout << "Select mode" << endl;
		cout << "1. Is prime" << endl;
		cout << "2. Print primes" << endl;
		cout << "3. Print primes rev" << endl;
		cout << "4. Print binary" << endl;
		cout << "Your choice: ";
		cin >> mode;

		switch (mode) 
		{
			case 1: 
			{
				cout << (is_prime(n)) << endl;
				break;
			}
			case 2: 
			{
				print_primes(n);
				break;
			}
			case 3: 
			{
				print_primes_rev(n);
				break;
			}
			case 4: 
			{
				print_binary(n);
				break;
			}
			default: 
			{
				cout << "Error";
				break;
			}
		}
		cout << endl << endl;
	}
}