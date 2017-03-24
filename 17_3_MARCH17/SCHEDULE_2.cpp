#include <bits/stdc++.h>
using namespace std;

#define forall(i,a,b)                for(int i=a;i<b;i++)
#define ll long long int
#define llu long long unsigned
#define vll vector<ll>
#define vllu vector<llu>
#define sll set<ll>
#define sllu set<llu>
#define pb push_back
#define mll map<ll,ll>
#define mllu map<llu,llu>
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define mod 1000000007


bool tryy(ll len[],ll sss,ll l,ll r,ll k)
{
ll ans=0;
forall(i,0,sss+1){
ans+=floor(len[i]/(floor((l+r)/2)+1));
}
return ans<=k;
}

bool tryylr(ll len[],ll sss,ll p,ll k)
{
ll ans=0;
forall(i,0,sss+1){
ans+=floor(len[i]/(p+1));
}
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

//        if(s=="1001"){            cout<<"2"<<endl;
//            continue;
//}

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
        ll sss=smart-1;
        ll l,r;
        l=1;
        r=len[0]+1;

        while(l<r-1)
        {
            if(tryy(len,sss,l,r,k)){
                r=floor((l+r)/2);}
            else
                l=floor((l+r)/2);
        }
            ll ans;
            if(tryylr(len,sss,l,k))
                ans=l;
            else
                ans=r;
            if(ans==1)
            {
                ll cnt1=0,cnt2=0;
                forall(i,0,s.length())
                {
                    if(i%2 && s[i]!='0')cnt1++;
                    else if(!(i%2) && s[i]!='1')cnt1++;
                }
                forall(i,0,s.length())
                {
                    if(i%2 && s[i]!='1')cnt2++;
                    else if(!(i%2) && s[i]!='0')cnt2++;
                }
                if(cnt1<=k || cnt2<=k)
                    ans=1;
                else
                    ans=2;
            }
            cout<<ans<<endl;
	}
return 0;
}
