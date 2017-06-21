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
 
struct trienode
{
    trienode *children[26];
    // bool endofword;
};

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("CHEFCODE_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int n;
    ll k;
    cin>>n>>k;
    ll a[n],t;
    // ll smart=0;
    rep(i,0,n)
    {
        cin>>t;
        // if(t>k)continue;
        a[i]=t;
    }
    // n=smart;
    // ll pp=1;
    // rep(i,0,n)
        // pp=pp*a[i];
    // if(pp<k){cout<<pow(2,n)-1<<endl;return 0;}
    sort(a,a+n);
    reverse(a,a+n);
    ll cnt=0;
    rep(i,1,pow(2,n))
    {
        ll p=1;
        ll temp=i;
        rep(j,0,n)
        {
            // cout<<temp<<" tt";
            if(temp%2)
            {
                p=p*a[j];
                // cout<<p<<" ";
                if(p>k)break;
            }
            temp = temp>>1;
            // cout<<j<<"j ";
        }
        if(p<=k)
            cnt++; 
    }   
    cout<<cnt<<endl;






//  --------------------------------------------------------------------------------------

return 0;
}
