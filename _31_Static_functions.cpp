#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void SetData(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"the id of this employee "<<id<<" and this is empoylee number "<<count<<endl;;
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};  


    int Employee::count;//defult value zero

int main(){
    Employee dileep,sit,ron;
    dileep.SetData();
    dileep.getData();
    Employee::getCount();
    sit.SetData();
    sit.getData();
        Employee::getCount();
    ron.SetData();
    ron.getData();
        Employee::getCount();
    return 0;
}