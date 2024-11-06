#include<bits/stdc++.h>
using namespace std;
void mul(int a , int b ){
    int sum = a*b;
    cout<<"The multiply is "<<sum;
}
int main()
{
    int x;
    int y;

    cout<<"Give x: ";
    cin>>x;
    cout<<"Give y: ";
    cin>>y;

    mul(x,y);

    return 0;
}