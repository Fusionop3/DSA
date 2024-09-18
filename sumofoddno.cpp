#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int odd=0;
    for(int i=1; i<=n; i++){
        if(i%2 !=0){
            odd= odd+i;    
        }
    }
    cout<<"The sum of odd no is: "<<odd<<endl;

    return 0;
}