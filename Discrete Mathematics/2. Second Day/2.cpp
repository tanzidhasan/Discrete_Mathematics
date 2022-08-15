#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

bool func(unsigned long long n)
{
    if(n==1)
        return true;
    else if(n==0)
        return false;
    else if(n%2==0)
        func(n/2);
    else if(n%2==1)
        func((3*n)+1);
}

int main()
{
    unsigned long long number;
    number=(5.6*pow(10,13))+rand();
    for(int i=0;i<9;i++)
    {
        if(bool(func(number))==1)
           cout<<i+1<<". For Number "<<number <<"."<<endl<<"   This (3x+1) Conjecture is : True."<<endl<<endl;
        else
           cout<<i+1<<". For Number "<<number <<"."<<endl<<"   This (3x+1) Conjecture is : False."<<endl<<endl;
        number++;
    }

    return 0;
}
