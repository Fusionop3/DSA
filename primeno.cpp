#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    bool prime = true;

    for(int i=2;i<=num-1;i++){
        if(num % i ==0){
            prime = false;
            break;
        }
    }
    if(prime == true){
        cout<<"It is a prime Number";
    }else{cout<<"It is not a Prime Number";}

    return 0;
}