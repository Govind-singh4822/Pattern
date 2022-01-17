#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=n;i>=-n;i--)
    {
        for(int j=n;j>=abs(i);j--)
            cout<<j;

        cout<<endl;
    }
}

/*
5

5
54
543
5432
54321
543210
54321
5432
543
54
5
*/