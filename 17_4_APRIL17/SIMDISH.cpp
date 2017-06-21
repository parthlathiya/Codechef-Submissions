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
	freopen("SIMDISH_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    ll T;
    cin>>T;
    while(T--)
    {

        string a[4],b[4];
        rep(i,0,4)cin>>a[i];
        rep(i,0,4)cin>>b[i];
        int cnt=0;
        rep(i,0,4)
        {
            rep(j,0,4)
            {
                if(a[i]==b[j]){cnt++;break;}
            }
        }
        if(cnt>=2)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;
    }

//  --------------------------------------------------------------------------------------

return 0;
}
