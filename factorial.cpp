#include<iostream>   //this code is to take out factorial of 6 only as more than that requires double or float data type
using namespace std;
int main()
{
    int fact = 1;
    int n=6;
    for(int i=1; i<=n;i++){
        fact= fact*i;
    }
    cout<<"The Factorial of 6 is: "<<fact;


    return 0;
}