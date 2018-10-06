#include <iostream>
using namespace std;

int main()
{
    int num,n,digit,sum=0;
    cout<<"Enter any positive number "<<endl;
    cin>>num;
    n=num;
    
    while(num !=0)
    {
        digit=num%10;
        sum+=digit*digit*digit;
        num/=10;
    }
    if(sum==n)
    {
        cout<<"The entered by you is an Armstrong Number "<<endl;
    }
    else
    {
        cout<<"The number entered by you is not an Armstrong Number "<<endl;
    }
    return 0;
}
