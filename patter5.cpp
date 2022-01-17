#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=n;i>=-n;i--)
    {
        for(int j=1;j<=abs(i);j++)
            cout<<" ";
        
        for(int j=n;j>=abs(i);j--)
            cout<<"* ";
        
        cout<<"\n";
    }
}

/*
5
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
*/