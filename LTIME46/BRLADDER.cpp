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
    freopen("BRLADDER_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int T;
    cin>>T;
    while(T--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        // cout<<a<<b;
        if((a%2 && !(b%2) && a+1==b) || (a%2 && b%2 && a+2==b) || (!(a%2) && !(b%2) && a+2==b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

//  --------------------------------------------------------------------------------------

return 0;
}

