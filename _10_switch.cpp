#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter a number"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:  
        cout<<"youa are 18";/* code */
        break;
    case 12:  
        cout<<"youa are 12";/* code */
        break;
    case 28: 
        cout<<"youa are 28";/* code */
        break;
    
    default:
        break;
    }
    cout<<"donw with switch case";
    return 0;
}