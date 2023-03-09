#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number = 0";
    cin>>num;
    int count=0;
    while (num>0)
    {
        int binary=num%2;
        if (binary==0)
        {
            count++;
        }
        num/=2;
        
    }
    cout<<"The number of zeros is : "<<count<<endl;    
}