//To find the largest number among three numbers
#include<iostream>
using namespace std;
int main()
{
    int f1,f2,f3;
    cout<<"Enter the first number: ";
    cin>>f1;
    cout<<"Enter the second number: ";
    cin>>f2;
    cout<<"Enter the third number: ";
    cin>>f3;
    if(f1>f2)
    {
        if(f1>f3)
        {
            cout<<f1<<" is the largest number.";
        }
    }
    else if(f2>f3)
    {
        cout<<f2<<" is the largest number.";
    }
    else{
        cout<<f3<<" is the largest number.";
    }
}
