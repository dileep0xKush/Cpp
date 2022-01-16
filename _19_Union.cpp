#include<iostream>
using namespace std;
union money
{
   int rice;
   char car;
   float Rs;
};
int main(){
    union money m1;
    m1.rice=21;
    m1.car='D';
    m1.Rs=1023.45;
    cout<<"The value of = "<<m1.rice<<endl;
    // cout<<"The value of = "<<m1.car<<endl;
    // cout<<"The value of = "<<m1.Rs<<endl;
}