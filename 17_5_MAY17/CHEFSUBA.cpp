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
	freopen("CHEFSUBA_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    ll n,k,p;
    cin>>n>>k>>p;
    if(k>n)k=n;
    int a[n];
    rep(i,0,n)
        cin>>a[i];
    
    ll aa[2*n-k+1];
    aa[0]=0;
    rep(i,0,k)
        aa[0]+=a[i];
    

    rep(i,1,n)
    {
        aa[i]=aa[i-1]-a[i-1]+a[(i+k-1)%n];
    }

    // rep(i,0,n-k+1)
    // {
    //     aa[n+i]=aa[i];
    // }
    
    // rep(i,0,2*n-k+1)
    // cout<<aa[i]<<" ";
    multiset<ll, greater<ll> > my;
    rep(i,0,n-k+1)
    my.insert(aa[(i+n)%n]);
    ll ans[n];

    string ss;
cin>>ss;

// ll cntt=0;
// rep(i,0,ss.length())
// if(ss[i]=='!')cntt++;

//     rep(i,0,min(cntt+1,n)){

// // cout<<endl;
// // for (std::multiset<ll, greater<ll> >::const_iterator j(my.begin()), end(my.end());
// //      j != end;
// //      ++j)
// //     std::cout << *j << " ";
// // cout<<endl;
// // multiset<ll, greater<ll> >::iterator it = my.end();
// //             ans[i]=*(--it);


//             ans[i]=*(my.begin());
//             // cout<<ans[i];
//     // auto itr = my_multiset.find(value)
//     my.erase(my.find(aa[(2*n-k-i)%n]));
// // my.erase (aa[i+1]);
//     my.insert(aa[(n-i-1)%n]);
//     // cout<<aa[2*n-k-i]<<" "<<aa[n-i-1];
// }
// cout<<endl;
// reverse(ans,ans+n);
// rep(i,0,n)
// {cout<<ans[i]<<" ";}

ll cnt=0;
// string ss;
// cin>>ss;
rep(i,0,ss.length())
{
if(ss[i]=='?')


     {
    cout<<*(my.begin())<<endl;
            // cout<<ans[i];
    // auto itr = my_multiset.find(value)
    // cnt++;
// }
    // cout<<ans[cnt]<<endl;
}else
    {
my.erase(my.find(aa[(2*n-k-cnt)%n]));
// // my.erase (aa[i+1]);
    my.insert(aa[(n-cnt-1)%n]);
    cnt =(cnt+1)%n;
}
}




//  --------------------------------------------------------------------------------------

return 0;
}
