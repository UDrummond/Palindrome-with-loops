//Michael Drummond
//Palindrome using Loops
#include <iostream>
using namespace std;

int main()
{
    //char array with the size of 50
    char strin[50];
    
    //Taking users input into array
    cout <<"Enter String:";
    cin.getline(strin,50);
    
    //Finding the size of array i = counter, increment as long as position isn't null
    for(int i = 0; strin[i] != '\0'; i++)
    
    //divide array in half and compare both sides using a decrement and increment variable    
    for(int a = 0;int b = 0; a < i/2, a++, b--)
    {
        //if at any point array at position (a++,b--) not equal retun false and break out loop
        if(strin[a] != strin[b])
        {
            return false;
            break;
        }
        
    }
    
    if(false)
    {
        cout << "Not a palindrome";
    }
    else
    {
        cout <<"This is a palindrome";
    }
    
    return 0;
}
