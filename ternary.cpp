#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The number is: "<<(n>=0 ? "Positive" : "Negative");

    return 0;
}