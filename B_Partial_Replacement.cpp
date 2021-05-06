#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,c,x,i=0,j=0,k,ans,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        i=0;
        j=0;
        cin>>r>>c>>x;
        if(x%r==0)
        {
            j=x/r -1;
            i=r-1;
        }
        else
        {
            j=x/r;
            i=x%r -1;
        }
        ans=(i*c)+j+1;
        cout<<ans<<endl;
    }
    
    
    return 0;
}