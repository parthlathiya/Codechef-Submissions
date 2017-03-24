#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007


struct inte
{
ll s;
ll e;
};

bool mf1(ll i,ll j){return i<j;}
bool mf2(inte i,inte j){return i.s<j.s;}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("MAKETRI_in.txt","r",stdin);
#endif

        ll N,L,R;
        cin>>N>>L>>R;
        ll i;
        ll a[N];
        forall(i,0,N)
            cin >> a[i];
        sort(a,a+N,mf1);

//        forall(i,0,N)
//            cout << a[i];

//        ll startp[N-1];
//        ll endp[N-1];
//        ll magic=0;
//		forall(i,0,N-1)
//        {
//            sp=a[i+1]-a[i]+1;
//            ep=a[i+1]+a[i]-1;
//            if(i==0)
//            {
//                startp[magic]=sp;
//                endp[magic]=ep;
//                magic++;
//            }
//            else
//            {
//                if(sp<=startp[magic-1])
//                {
//                    startp[magic-1]=sp;
//                    endp[magic-1]=ep;
//                }
//                else if(sp>startp[magic-1] && sp<endp[magic-1])
//                    endp[magic-1]=ep;
//                else
//                {
//                    startp[magic]=sp;
//                    endp[magic]=ep;
//                    magic++;
//                }
//            }
//
//        }
//
//        ll ans=0;
//		forall(i,L,R+1)
//		{
//            forall(j,0,N-1)
//            {
//                if(i>=startp[j] && i<=endp[j])
//                {
//                    ans++;
//                    break;
//                }
//            }
//        }
//        cout << ans << endl;
        inte inter[N-1];
        forall(i,0,N-1)
        {
            inter[i].s=a[i+1]-a[i]+1;
            inter[i].e=a[i+1]+a[i]-1;
        }

//        forall(i,0,N-1)
//            cout << "d"<<inter[i].s<<"l "<<inter[i].e<< endl;

        sort(inter,inter+N-1,mf2);

//        forall(i,0,N-1)
//            cout << "d"<<inter[i].s<<"l "<<inter[i].e<< endl;


        stack<inte> ss;

        ss.push(inter[0]);

        forall(i,1,N-1)
        {
            if((ss.top()).e>=inter[i].s)
            {
                inte temp=ss.top();
                temp.e=maX(temp.e,inter[i].e);
                ss.pop();
                ss.push(temp);
            }
            else
                ss.push(inter[i]);
        }


        ll ans=0;
        while(!ss.empty())
        {
            inte tt=ss.top();

//            cout<<tt.s<<" "<<tt.e<<endl;
//            cout<<L<<" "<<R<<endl;

//            if(tt.s<=L)
//            {
//
//             if(tt.e>=L && tt.e<=R)
//                    ans+=tt.e-L+1;
//                else if(tt.e>R)
//                    ans+=R-L+1;
//            }
//            else if(tt.s<=R)
//             {
//
//             if(tt.e>=L && tt.e<=R)
//                    ans+=tt.e-tt.s+1;
//                else if(tt.e>R)
//                    ans+=R-tt.s+1;
//            }

            ll start=maX(tt.s,L);
            ll end=miN(tt.e,R);
            if(start<=end)
                ans+=end-start+1;
            ss.pop();
        }



//        ll ans=0;
//		forall(i,L,R+1)
//		{
//            for(int j=N-1;j>=0;j--)
//            {
//                if(i>=startp[j] && i<=endp[j])
//                {
//                    //cout << endp[j] << i << endl;
//
//                    ans= ans + miN(endp[j],R) - i + 1;
//                    i=miN(endp[j],R);
//                    //cout << ans << i << endl;
//                    break;
//                }
//            }
//        }


        cout << ans << endl;
        return 0;
}
