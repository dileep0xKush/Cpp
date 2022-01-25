#include<iostream>
using namespace std;

class Empolyee{
    int id;
    int salary;
    public:
    void setId(void){
        salary =122;
        cout<<"Enter the id of employee "<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main(){
    // Empolyee dileep, roh,lov,sit;
    // dileep.setId();
    // dileep.getId();
    Empolyee vits[4];
    for (int i = 0; i < 4; i++)
    {
     vits[i].setId();
     vits[i].getId();  
    }
    

    return 0;
}