#include <iostream>
using namespace std;

int sum(int a, int b);
// int num(int ,int)   ->execpt

int main()
{
    int num1, num2;
    cout << "Enter two number = ";
    cin >> num1 >> num2;
    cout << "sum is = " << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
