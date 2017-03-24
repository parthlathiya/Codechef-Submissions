#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

bool tryy(string s,ll p,ll k)
{
    char cr=s[0];
    ll cnt=1;
    ll ans=0;
forall(i,1,s.length())
       {
////1001
//           cout<<s[i]<<" "<<cr<<" "<<cnt<<" "<<ans<<endl;
           if(s[i]==cr){cnt++;if(cnt>p){cr=cr=='0'?'1':'0';cnt=1;ans++;}}
           else{cr=s[i];cnt=1;}
       }
//cout<<"ans"<<ans<<endl;
return ans<=k;
}


bool mf(ll i,ll j){return i>j;}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("SCHEDULE_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		ll n,k;
        cin >> n>>k;

        string s;
        cin>>s;

        if(k>=n)
        {
            cout<<"1"<<endl;
            continue;
        }

        ll len[10001];
        ll smart=0;
        ll cnt=1;
        forall(i,1,s.length())
        {
            if(s[i]==s[i-1])cnt++;
            else{
                len[smart++]=cnt;
                cnt=1;
            }
        }
        len[smart++]=cnt;

        sort(len,len+smart,mf);
        ll l,r;
        l=1;
        r=len[0]+1;
        ll ans;
        while(l<r-1)
        {
            if(tryy(s,floor((l+r)/2),k))
                r=floor((l+r)/2);
            else
                l=floor((l+r)/2);
        }
//        cout<<l<<r<<endl;
        if(tryy(s,l,k))
            cout<<l<<endl;
        else
            cout<<r<<endl;

	}
return 0;
}
