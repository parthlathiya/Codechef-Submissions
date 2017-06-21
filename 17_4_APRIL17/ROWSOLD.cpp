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
	freopen("ROWSOLD_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    ll T;
    cin>>T;
    while(T--)
    {

        string a;
        cin>>a;
        int p[100001];
        int smart=0,cnt=0,f=0;
        rep(i,0,a.length())
        {
            if(a[i]=='1')
            {
                if(f){p[smart++]=cnt;}
                cnt=0;
                f=1;
            }
            else
                cnt++;
        }
        if(f)p[smart++]=cnt;
        llu ans=0;
        // rep(i,0,smart)cout<<p[i];
        rep(i,0,smart)
        {
            if(p[i])ans+= (p[i]+1)*(i+1);
        }   
        cout<<ans<<endl;
        
    }

//  --------------------------------------------------------------------------------------

return 0;
}
