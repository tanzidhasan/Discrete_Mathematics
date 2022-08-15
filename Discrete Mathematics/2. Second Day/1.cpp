#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

float a[5]={1,-1,0,2,1};

vector<float> A,B;

float func(int x,int y)
{
    float result;
    result = (a[0]*pow(x,a[3]))+(a[1]*pow(y,a[4]));
    return result;
}

bool uni_uni()
{
    int X,Y;
    for(int i=0;i<A.size();i++)
    {
        X = A[i];
        for(int j=0;j<B.size();j++)
        {
            Y = B[j];
            if(func(X,Y) != a[2])
                return false;
        }
    }
    return true;
}
bool uni_exist()
{
    int X,Y,counter;
    for(int i=0;i<A.size();i++)
    {
        X = A[i];
        counter = 0;
        for(int j=0;j<B.size();j++)
        {
            Y = B[j];
            if(func(X,Y) == a[2])
                break;
            counter++;
        }
        if(counter == B.size())
            return false;
    }
    return true;
}
bool exist_uni()
{
    int X,Y,counter;
    for(int i=0;i<A.size();i++)
    {
        X = A[i];
        counter = 0;
        for(int j=0;j<B.size();j++)
        {
            Y = B[j];
            if(func(X,Y) != a[2])
                break;
            counter++;
        }
        if(counter == B.size())
            return true;
    }
    return false;
}

bool exist_exist()
{
    int X,Y,counter;
    for(int i=0;i<A.size();i++)
    {
        X = A[i];
        counter = 0;
        for(int j=0;j<B.size();j++)
        {
            Y = B[j];
            if(func(X,Y) == a[2])
                return true;
        }
    }
    return false;
}

void setA()
{
    cout<<"Enter elements for set A(Press Zero for End) :\n";
    for(;;)
    {
        int n;
        cin>>n;
        if(n == 0)
            break;
        A.push_back(n);
    }
}
void setB()
{
    cout<<"Enter elements for set B(Press Zero for End) :\n";
    for(;;)
    {
        int n;
        cin>>n;
        if(n == 0)
            break;
        B.push_back(n);
    }
}
int main()
{
    int n;
    for(;;)
    {
        cout<<"1. Set A\n2. Set B\n3. AxAyP(x,y)\n4. AxEyP(x,y)\n5. ExAyP(x,y)\n6. ExEyP(x,y)\n7. Exit\n\nEnter your option(1-7) : ";
        cin>>n;
        if(n>7)
            cout<<"Invalid input."<<endl<<endl;
        if(n==7)
            break;
        switch(n)
        {
            case 1:
                   {
                    cout<<endl<<"1. Set A : "<<endl;
                    setA();
                    cout<<endl<<endl;
                   }break;
            case 2:{
                    cout<<endl<<"2. Set B : "<<endl;
                    setB();
                    cout<<endl<<endl;
                   }break;
            case 3:{
                    cout<<endl<<"3. AxAyP(x,y) : "<<endl;
                    if(uni_uni()==1)
                        cout<<"AxAyP(x,y) is True.\n"<<endl;
                    else
                        cout<<"AxAyP(x,y) is False.\n"<<endl;
                   }break;
            case 4:{
                    cout<<endl<<"4. AxEyP(x,y) : "<<endl;
                    if(uni_exist()==1)
                        cout<<"AxEyP(x,y) is True.\n"<<endl;
                    else
                        cout<<"AxEyP(x,y) is False.\n"<<endl;
                   }break;
            case 5:{
                    cout<<endl<<"5. ExAyP(x,y) : "<<endl;
                    if(exist_uni()==1)
                        cout<<"ExAyP(x,y) is True.\n"<<endl;
                    else
                        cout<<"ExAyP(x,y) is False.\n"<<endl;
                   }break;
            case 6:{
                    cout<<endl<<"6. ExEyP(x,y) : "<<endl;
                    if(exist_exist()==1)
                        cout<<"ExEyP(x,y) is True.\n"<<endl;
                    else
                        cout<<"ExEyP(x,y) is False.\n"<<endl;
                   }break;
        }
    }
    return 0;
}
