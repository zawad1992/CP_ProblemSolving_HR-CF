#include <iostream>

using namespace std;


int main()
{
    int i,n;
    long sum = 0;
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];      
    }
    cout<<sum;
    
   return 0;
}
