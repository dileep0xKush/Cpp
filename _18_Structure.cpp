# include<iostream>
using namespace std;
struct employee
{
    int id;
    char name;
    float sal;
};

int main(){
    struct employee ram;
    ram.id = 101;
        ram.name='R';
    ram.sal= 102.21;
 
    cout<<"This is value is = "<<ram.id<<endl;
     cout<<"This is value is = "<<ram.name<<endl;
    cout<<"This is value is = "<<ram.sal<<endl;
    return 0;
}