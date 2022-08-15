#include <bits/stdc++.h>

using namespace std;

void printPowerSet(char *set, int s)
{
    unsigned int p=pow(2,s);

    for(int i=0;i<p;i++)
    {
      printf("{");
      for(int j=0;j<s;j++)
       {
           if(i & (1<<j))
           {
               printf("%c",set[j]);
           }

       }
       if(i==p-1)
          printf("} . \n");
       else
          printf("} , ");
    }
}

int main()
{
    int n;
    cout<<"Enter the element number : ";
    cin>>n;
    char set[n];
    cout<<"Enter the elements of A set : ";
    for(int i=0;i<n;i++)
        cin>>set[i];
    cout<<endl<<"Power Set : ";
    printPowerSet(set, n);

    return 0;
}
