#include <iostream>
using namespace std;

float moneyRecived(int currentMoney, float facter = 10.4)
{
    return currentMoney * facter;
}
int main()
{
    int monay = 10000;
    cout << " if you have" << monay << "Rs in your bank account , you will recvice = " << moneyRecived(monay) << "RS after 1 year";

    return 0;
}
