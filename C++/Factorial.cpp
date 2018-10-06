#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<0)
    {
        return(-1); //Corresponds to wrong value
    }
    if(n==0)
    {
        return(1); //Terminating condition
    }
    else
    {
        return(n*factorial(n-1)); //recursive call
    }
}
int main()
{
    int factorial(int);
    int fact,n;
    cout<<"Enter the number of which u wish to get factorial"<<endl;
    cin>>n;
    fact=factorial(n);
    cout<<"Factorial of the number you entered is "<<fact<<endl;
    return 0;
}

