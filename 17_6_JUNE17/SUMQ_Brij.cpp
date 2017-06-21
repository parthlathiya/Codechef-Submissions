#include <bits/stdc++.h>
using namespace std;
 
#define N 100005
#define ll long long
#define mod 1000000007
 
ll search(ll a[],ll n,ll x)
{
    ll first=0,last=n-1,mid;
  //  int ans=-1;
   while (first <= last)
  {
    ll mid = (first + last) / 2;
    if (a[mid] >= x)
      last = mid - 1;
    else
      first = mid + 1;
  }
  return last;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("SUMQ_in.txt","r",stdin);
    #endif

    int t;
    cin>>t;
    while(t--)
    {   
        ll n1,n2,n3;
        cin>>n1>>n2>>n3;
        ll a[N],b[N],c[N];
        
        for(ll i=0;i<n1;i++)   cin>>a[i];
        for(ll i=0;i<n2;i++)   cin>>b[i];
        for(ll i=0;i<n3;i++)   cin>>c[i];
        
        sort(a,a+n1);
        sort(b,b+n2,greater<ll>());
        sort(c,c+n3);
        
        vector<pair<ll,ll> > v;
        vector<ll> sumA,sumC;
        
        sumA.push_back(a[0]);
        sumC.push_back(c[0]);
        
        for(ll i=1;i<n1;i++)
        sumA.push_back(sumA.back() + a[i]);
        for(ll i=1;i<n3;i++)
        sumC.push_back(sumC.back() + c[i]);
        
        for(ll i=0;i<n2;i++)
        { 
            ll x=search(a,n1,b[i]+1);
            ll y=search(c,n3,b[i]+1);
            if(x+1 < n1 && a[x+1] == b[i])
            x++;
            if(y+1 < n3 && c[y+1] == b[i])
            y++;
            
            if(x==-1 || y==-1)
            break;
            v.push_back(make_pair(x,y));
            
           // if(x==0 || y==0)
        //    break;
        }
        
        ll ans=0;
        for(ll i=0;i<v.size();i++)
        {
            ll x=v[i].first;
            ll y=v[i].second;
           // cout<<x<<" "<<y<<endl;
            ll forA=(((b[i])%mod)*((y+1)%mod)*(sumA[x]%mod))%mod;
            ll forC=(((b[i])%mod)*((x+1)%mod)*(sumC[y]%mod))%mod;
            ll forBoth=((sumA[x]%mod)*(sumC[y]%mod))%mod;
            ans+=(((x+1)%mod)*((y+1)%mod)*((b[i]%mod)*(b[i]%mod)))%mod;
            ans+=(forA%mod + forC%mod + forBoth%mod)%mod;
            ans%=mod;
        }
        cout<<ans%mod<<endl;
 
    
    }
    
    return 0;
} 