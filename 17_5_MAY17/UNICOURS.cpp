#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define pb push_back
#define mod 1e9+7

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/
 

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("UNICOURS_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll maxx=-1;
        cin>>n;
        rep(i,0,n)
        {
            ll tt;
            cin>>tt;
            maxx=max(tt,maxx);
        }
        cout<<n-maxx<<endl;
    }
    
//  --------------------------------------------------------------------------------------

return 0;
}
