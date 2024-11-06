#include<bits/stdc++.h>
using namespace std;

void divi(int a , int b){
    int sum = a/b;
    cout<<"The division is:"<<sum;
}

int main()
{
    int x,y;
    cout<<"Give x: ";
    cin>>x;
    cout<<"Give y: ";
    cin>>y;

    divi(x,y);

    return 0;
}