#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,m,n;
    cout<<"Enter the element number of A set : ";
    cin>>m;
    int a[m];
    cout<<"Enter the elements of A set : ";
    for(int i=0;i<m;i++)
        cin>>a[i];

    cout<<endl<<"Enter the element number of B set : ";
    cin>>n;
    int b[n];
    cout<<"Enter the elements of B set : ";
    for(int i=0;i<n;i++)
        cin>>b[i];

    cout<<endl<<"Cartesian Product : ";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(i==m-1 && j==n-1)
                cout<<"("<<a[i]<<","<<b[j]<<").";
            else
                cout<<"("<<a[i]<<","<<b[j]<<") , ";
        }

    cout<<endl;
    return 0;
}
