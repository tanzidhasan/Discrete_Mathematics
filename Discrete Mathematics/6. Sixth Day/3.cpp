#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n=0;
    cout<<"Enter the value of m for A(m*m) matrix : ";
    cin>>m;
    int a[m][m];
    cout<<"Enter the elements of A matrix : "<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];

    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]!=a[j][i])
            {
                n=1;
                break;
            }

    if(n==0)
        cout<<endl<<"It is symmetric matrix."<<endl;
    else
        cout<<endl<<"It is not symmetric matrix."<<endl;
}
