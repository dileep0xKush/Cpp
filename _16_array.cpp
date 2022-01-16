#include<iostream>
using namespace std;
int main(){
    int arr[]={12,14,25,365,78};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;

    // arr[2]=456;
    // cout<<arr[2];
cout<<"line Space "<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<endl;
    //     /* code */
    // }

    int i=0;
    while (i<5)
    {
      cout<<arr[i]<<endl;
      i++;  /* code */
    }
    
    return 0;
}