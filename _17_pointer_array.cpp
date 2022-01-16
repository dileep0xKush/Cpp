#include<iostream>
using namespace std;
int main(){
    int arr[]={12,23,5,45,450};
    //pointer and arrays
    int* p = arr;
    cout<<"The value of arr[0] is = "<<*p<<endl;
    cout<<"The value of arr[0] is = "<<*(p+1)<<endl;
    cout<<"The value of arr[0] is = "<<*(p+2)<<endl;
    cout<<"The value of arr[0] is = "<<*(p+3)<<endl;
    cout<<"The value of arr[0] is = "<<*(p+4)<<endl;
}