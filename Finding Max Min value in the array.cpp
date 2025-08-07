//SHIFATPREET SINGH 
//24070123098
//ENTC B1

#include<iostream> 
using namespace std;
int main(){
    int x;
    cout <<"Enter the size of array: ";
    cin>>x;
    int num[x];
    cout <<"Enter any " <<x<<" integer values: ";
    for(int i=0;i<x;i++){
        cin >>num[i];
    }
    int max=num[0];
    for(int j=1; j<x;j++)
    {
        if(max<num[j])
        {
            max=num[j];
        } 
    }
    cout <<"The maximum value in the array is: " << max << endl;
    int min=num[0];
    for(int k = 1;k<x;k++)    
    {
        if(min>num[k])
        {
            min=num[k];
        } 
    }   
    cout <<"The minimum value in the array is: " << min << endl;
}
/*
OUTPUT
Enter the size of array: 
5
Enter any 5 integer values: 1 23 45 64 64
The maximum value in the array is: 64
The minimum value in the array is: 1
*/
