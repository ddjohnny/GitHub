#include <cmath>
#include <iostream>
#include "funcs.h"

using namespace std;


bool is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void print_primes(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (is_prime(i))
		{
			cout << i << "  ";
		}
	}
	cout << endl;
}

void print_primes_rev(int n)
{
	for (int i = n; i > 0; i--)
	{
		if (is_prime(i))
		{
			cout << i << " ";
		}
	}
}

void print_binary(int n)
{
	long res = 0;
	int digits = 0;

	while (n != 0)
	{
		res += (n % 2) * (int)pow(10, digits);

		n /= 2;
		digits++;
	}

	cout << res;
}