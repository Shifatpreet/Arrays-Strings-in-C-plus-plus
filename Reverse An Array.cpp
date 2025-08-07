//SHIFATPREET SINGH
//24070123098
//ENTC B1

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the size of array: ";
    cin>>x;
    int num[x];
    cout <<"Enter any "<<x<<" integer values: ";
    for(int i=0;i<x;i++){
        cin>>num[i];
    }
    cout<<"Reversed Array is: ";
    for(int j=x-1;j>=0;j--)
    {
        cout<<num[j]<<" ";
    }
}
/*
OUTPUT
Enter the size of array: 5
Enter any 5 integer values: 1 23 45 64 15
Reversed Array is: 15 64 45 23 1 
*/

