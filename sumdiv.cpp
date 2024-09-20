#include<iostream>
using namespace std;
int main()
{
     int sum=0;
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     for(int i=1; i<=n; i++){
       if(i%3 ==0){
            sum=sum+i;
        }
     }
    cout<<"The sum of number divisible by 3 is: "<<sum<<endl;
    
    return 0;
}