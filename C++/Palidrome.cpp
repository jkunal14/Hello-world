#include <iostream>
using namespace std;

int main()
{
    int a,num,digit,rev=0;
    cout << "Please enter the number of which you wish to find Palindrome "<<endl;
    cin >> num;
    n=num;
    
    while(n!=0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    cout<<"The reverse of the number you entered is "<<rev<<endl;
    
    if(n==rev)
    {
        cout<<"The number you entered is a Palindrome "<<endl;
    }
    else
    {
        cout<<"The number you entered is not a Palindrome "<<endl;
    }
    return 0;
}

