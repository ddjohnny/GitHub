#include <iostream>
#include "num.h"
using namespace std;


int main()
{
	#if defined (_DEBUG)
	cout << "debug\n";
	#else
	cout << "release\n";
	#endif

	int a, b;

	cin >> a;
	cin >> b;

	max(a, b) > 0 ? cout << "a larger" : cout << "b larger";
	cout << endl << endl;

	cout << maximum();

	int p;cin >> p;
}