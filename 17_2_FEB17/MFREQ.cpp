#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007


struct frele
{
ll l;
ll r;
ll ele;
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("MFREQ_in.txt","r",stdin);
#endif

        ll N,M,L,R,K;
        cin>>N>>M;
        ll a[N];
        frele s[(int)floor(sqrt(N))];

        forall(k,0,(int)floor(sqrt(N)))
            s[k].ele=-1;

        ll cnt=1;
        ll smarti=0;
        ll break1=0;
        forall(i,0,N)
        {
            cin >> a[i];
            if(i>0)
            {
                if(a[i]==a[i-1])
                    cnt++;
                else
                {
                    if(cnt>=(int)floor(sqrt(N)))
                    {
                        s[smarti].l=break1;
                        s[smarti].r=i-1;
                        s[smarti].ele=a[i-1];
                        smarti++;
                    }
                    break1=i;
                    cnt=1;

                }
            }
        }
        if(cnt>=(int)floor(sqrt(N)))
        {
            s[smarti].l=break1;
            s[smarti].r=N-1;
            s[smarti].ele=a[N-1];
        }
//
//        forall(k,0,(int)floor(sqrt(N)))
//        {
//            cout << s[k].l <<" ";
//            cout << s[k].r<<" ";
//            cout << s[k].ele<<endl;
//        }


        forall(i,0,M)
        {
            cin>>L>>R>>K;
            ll ans=-1;
            if( (R-L+1) <= (2*(int)floor(sqrt(N)))  )
            {
                cnt=1;
                ll k;
                for(k=L+1;k<R+1;k++)
                {
                    if(k>0)
                    {
                        if(a[k-1]==a[k-1-1])
                            cnt++;
                        else
                        {
                            if(cnt>=K)
                            {
                                ans=a[k-1-1];
                                break;
                            }
                            cnt=1;
                        }
                    }
                }
                if(cnt>=K && k==R+1)
                    ans=a[R-1];
            }
            else
            {
                for(ll k=0; k<(int)floor(sqrt(N)) && s[k].ele!=-1; k++)
                {
                    if( (s[k].r-s[k].l+1)>=K && maX(s[k].l,(L-1))<=miN(s[k].r,(R-1)) )
                    {
                        if( (miN(s[k].r,(R-1))-maX(s[k].l,(L-1))+1) >= K)
                        {
                            ans=s[k].ele;
                            break;
                        }
                    }
                }
//                cout << "av";
            }
        cout << ans << endl;
        }

        return 0;
}
