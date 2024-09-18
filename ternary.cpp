#include<iostream>
using namespace std;                       //Ternary operator are good but we dont use it mush as it is alittle confusing
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The number is: "<<(n>=0 ? "Positive" : "Negative");

    return 0;
}