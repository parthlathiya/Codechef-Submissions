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

map<pair<int,double> , ll> my;
double a[30];
ll counter(int index,double k)
{
    if(my.find(make_pair(index,k))!=my.end())
        return my[make_pair(index,k)];
    if(index==0)
        {
            if(a[0]<=k)return 2;
            else
             return 1;
        }

        

ll aa=0;
if(a[index]<=k)
{
aa=counter(index-1,k-a[index]);
}
aa = aa+counter(index-1,k);

return my[make_pair(index,k)]=aa;
}

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("CHEFCODE_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int n;
    double k;
    cin>>n>>k;
    ll t;
    ll smart=0;
    rep(i,0,n)
    {
        cin>>t;
        if(t>k)continue;
        a[smart++]=t;
    }
    n=smart;
    if(n==0)
    {cout<<0<<endl;return 0;}// n=smart;
    
    k=log(k);
    rep(i,0,n)
    a[i]=log(a[i]);
    double pp=0.0;
    rep(i,0,n)
        pp=pp+a[i];
    if(pp<=k){cout<<(ll)pow(2,n)-1<<endl;return 0;}
    sort(a,a+n);
    reverse(a,a+n);
    // cout<<"dd"<<endl;
    ll ans=counter(n-1,k);
    cout<<ans-1<<endl;






//  --------------------------------------------------------------------------------------

return 0;
}
