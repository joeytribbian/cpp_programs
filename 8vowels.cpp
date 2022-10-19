//To check a character is a vowel or consonant
#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Enter an alphabet: ";
    cin>>character;
    if(!isalpha(character))
    {
        cout<<"Invalid number";
    }
    else if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'|| character=='A' || character=='E'|| character=='I' || character=='O'|| character=='U')
    {
        cout<<"Its a vowel";
    }
    else
    {
        cout<<"Its a consonant";
    }
  
}
