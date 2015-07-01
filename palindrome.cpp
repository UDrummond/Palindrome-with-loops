//Michael Drummond
//Palindrome using Loops
#include <iostream>
using namespace std;

int main()
{
    const int size = 50;
    char string[size];
    
    cout <<"Enter String:";
    cin.getline(string,size);
    
    int length;
    for(length = 0; string[length] !='\0'; length++)

    int forward,backward,check = 0;
    for(forward = 0, backward = length-1;forward<length/2; forward++,backward--)
    {
        if(string[forward] !=string[backward])
        {
            check = -1;
        }
    }
    
    if(check == -1)
    {
        cout <<"Not a Palindrome";
    }
    else
    {
        cout <<"This is a Palindrome";
    }
    
    return 0;
}
