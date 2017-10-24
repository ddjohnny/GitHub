#include <iostream>
#include <string>
 
using namespace std;
string answer;

void calc(int num,int base)
{
    while(num > 0) {
        int rem = num % base;
        if (rem <= 9) answer += char(rem + '0');
            else answer += char(rem - 10 + 'A');
        num /= base;
    }
}
 
int main()
{
    int num,base;
 
    cout << "Set number: ";
    cin >> num;
    cout << "Set base: ";
    cin >> base;
    
    calc(num,base);
    cout << "Answer: " << answer;
}
