#include<bits/stdc++.h>
using namespace std;
void sub(int a,int b){
    int sum = a-b;
    cout<<"The substraction is: "<<sum;
}
int main()
{
    int x,y;
    cout<<"Give x: ";
    cin>>x;
    cout<<"Give y: ";
    cin>>y;

    sub(x,y);

    return 0;
}