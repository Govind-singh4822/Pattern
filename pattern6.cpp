#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;

    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
            cout<<" ";

        for(int j=count;j>=1;j--)
        {
            cout<<j;
        }
        count+=2;
        cout<<endl;
    }
}

/*
5
    1
   321
  54321
 7654321
987654321

*/