#include <iostream>
#include "num.h"
using namespace std;

#define n_one 10
#define n_two n_one + 10
#define n_two_true (n_one + 10)

int maximum()
{
	cout << n_two * 10 << " - false \n" << n_two_true * 10 << " - true \n";
	return 0;
}