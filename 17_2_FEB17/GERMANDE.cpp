#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

bool mf(ll i,ll j){return i<j;}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("GERMANDE_in.txt","r",stdin);
#endif

        ll T;
        cin>>T;
        while(T--)
        {
            ll o1,o2;
            cin >>o1>>o2;
            ll t;
            ll a[o1];
            ll tt[o1*o2];
            ll cnt=0;
            ll smart=0;
            int ans=0;
            forall(i,0,o1)
            {
                a[i]=0;
                forall(j,0,o2)
                {
                    cin>>t;
                    tt[smart++]=t;
                    a[i]+=t;
                }
//                cout<<a[i]<<"ai"<<endl;
                if(a[i]>=ceil(o2/2.0))
                   cnt++;
            }
//            cout<<cnt<<"cnt";

            if(cnt>=ceil(o1/2.0))
            {
                cout<<"1"<<endl;
                continue;
            }
            ll i;
            for(i=0;i<o2-1;i++)
            {
                cnt=0;
                forall(j,0,o1)
                {
                    a[j]=a[j]-tt[i+j*o2]+tt[(i+j*o2+o2+o1*o2)%(o1*o2)];
                    if(a[j]>=ceil(o2/2.0))
                        cnt++;
                }
                if(cnt>=ceil(o1/2.0))
                {
                    cout<<"1"<<endl;
                    break;
                }
            }

            if(i==o2-1)
                cout<<"0"<<endl;

//            forall(i,0,o2)
//            {
//             forall(j,0,o1)
//                    cout<<tt[i][j]<<" ";
//            cout<<endl;
//            }

//            for(i=0;i<o2;i++)
//            {
//                ll cnt=0;
//                forall(j,0,o1)
//                {
//                    if(tt[i][j]>=ceil(o2/2.0))
//                        cnt++;
//                //cout<<cnt<<"d ";
//                }
//                if(cnt>=ceil(o1/2.0))
//                {
//                    cout<<"1"<<endl;
//                    break;
//                }
//            }
//    //        cout << i <<"i"<<endl;
//            if(i==o2)
//                cout<<"s"<<endl;

        }
        return 0;
}
