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
	freopen("ICL1701_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int n,k;
    cin>>n>>k;
    int ans[n],a[n];
    int smart=0;
    rep(i,0,n)
    {
        cin>>a[i];
    }
    rep(i,0,n)
    {
        if(i<n-1 && a[i]<0){ans[smart++]=i+1;a[i]=-a[i];a[i+1]=-a[i+1];}
    }
    if(a[n-1]<0){ans[smart++]=n;}

//  --------------------------------------------------------------------------------------
cout<<smart<<endl;
rep(i,0,smart)
{
    if(i!=smart-1)cout<<ans[i]<<" ";
    else
        cout<<ans[i];
}
return 0;
}
