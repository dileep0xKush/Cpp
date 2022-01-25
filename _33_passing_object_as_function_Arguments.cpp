#include<iostream>
using namespace std;
class complex{
    int b;
    int c;
    public:
    void setData(int v1,int v2){
        b=v1;
        c=v2;
    }
    void setDataBySum(complex o1 , complex o2){
        b=o1.b +o2.b;
        c=o1.c + o2.c;
    }
    printNumber(){
        cout<<"Your complex number is  "<<b<<" + "<<c<<"i"<<endl;
    }
};
 
 int main(){
     complex d1,d2,d3;
     d1.setData(1, 2);
     d1.printNumber();

     d2.setData(3, 4);
     d2.printNumber();

     d3.setDataBySum(d1, d2);
     d3.printNumber();



     return 0;
 }