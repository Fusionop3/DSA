#include<iostream>
using namespace std;
int main()
{
    int n = 50;
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum= sum+i;
        if(i==10){
            break;
        }
    }
    cout<<"The sum is: "<<sum;

    return 0;
}