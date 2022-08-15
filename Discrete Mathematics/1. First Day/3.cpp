#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z,f=0,l=0;
    cout<<"Enter the number : ";
    cin>>z;
    cout<<endl<<"Solution Pair of (x^2)+(y^2)=(z^2) : ";
    for(int y=1;y<z;y++)
    {
        double x=sqrt((z*z)-(y*y));
        if(fabs(x-(round(x)))<0.000001)
        {
            cout<<"("<<x<<","<<y<<")"<<ends;
            f=1;
        }
    }
    if(f==0)
        cout<<endl<<"For (x^2)+(y^2)=(z^2), there is no solution."<<endl;
    else
        cout<<endl;
    cout<<endl<<"Solution Pair of (x^3)+(y^3)=(z^3) : ";
    for(int y=1;y<z;y++)
    {
        double x=pow(((z*z*z)-(y*y*y)),(0.3333));
        if(fabs(x-(round(x)))<0.000001)
        {
            cout<<"("<<x<<","<<y<<")"<<ends;
            l=1;
        }
    }
    if(l==0)
        cout<<endl<<"For (x^3)+(y^3)=(z^3), there is no solution."<<endl;

    return 0;
}
