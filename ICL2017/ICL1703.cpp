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

llu a[1000001];

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("ICL1703_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    llu t;
    cin>>t;

    while(t--)
    {
        llu n;
        cin>>n;
        llu m[n];
        llu cnt[n];
        llu maxx=0;
        rep(i,0,n)cnt[i]=0;
        
        llu smart=0,tt;
        rep(i,0,n)
        {
            cin>>m[i];
            cnt[i]+=m[i];
            rep(j,0,m[i])
            {
                cin>>tt;
                a[smart++]=i+tt;
                maxx=max(maxx,tt);
                cnt[(i+tt)%n]=cnt[(i+tt)%n]-1;
            }
        }
        //maxx cnt
        llu flag=1;
        rep(i,0,n){if(cnt[i]!=0){flag=0;break;}}
        if(flag)
        {
            ll anss=0;
            smart=0;
            rep(i,0,n)
            {
                rep(j,0,m[i])
                {
                  
                    llu temp=(maxx<=a[smart])?0:(maxx-a[smart]);
                    anss+=(ceil((maxx-i)/(float)n)-ceil(temp/(float)n));
                        // cout<<maxx<<" "<<i<<ceil((float)(maxx-i)/(float)n)<<" "<<temp<<anss<<endl;
                    smart++;
                }
            }
            cout<<anss<<endl;
        }
    else
        cout<<"-1"<<endl;
    }


//  --------------------------------------------------------------------------------------


    return 0;
}
