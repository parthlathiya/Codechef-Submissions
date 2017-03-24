#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define forallr(i,a,b)                for(int i=a-1;i>=b;i--)
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
	freopen("INTERVAL_in.txt","r",stdin);
#endif

        int T;
        cin>>T;
        while(T--)
        {
            ll n,m;
            cin >>n>>m;
//            cout<<n<<m;
            ll a[n],b[m];
            forall(i,0,n)
                cin>>a[i];
            forall(i,0,m)
                cin>>b[i];

//            cout<<a[0]<<b[0];

            ll tempp[n];
            ll tempc[n];
            ll t=0;
            forall(j,0,b[m-1])
                t+=a[j];
            ll maxx;
            tempp[0]=t;
            maxx=tempp[0];
            forall(j,1,n-b[m-1]+1)
             {

             tempp[j]=tempp[j-1]-a[j-1]+a[j-1+b[m-1]];
             if(tempp[j]>maxx)maxx=tempp[j];
             }
deque<ll> my;
            forallr(i,m-1,0)
            {
//                forall(i,0,n)
//             cout<< " d"<<tempp[i]<<"d ";
//             cout<<endl; //from second last
                ll t=0;
                forall(j,0,b[i])
                    t+=a[j];
                my.clear();
                my.push_back(tempp[1]);
                forall(k,2,b[i]-1-b[i+1]+1)
                {
                    if(tempp[k]<=my.back())
                        my.push_back(tempp[k]);
                    else
                     {
                        while(!my.empty() && my.back()<tempp[k])my.pop_back();
                        my.push_back(tempp[k]);
                     }
                }
//for(auto it=my.begin(); it!=my.end();++it)
//        std::cout << *it << "\n";

                tempc[0]=t-my.front();
//                cout<<"t"<<t<<"myf"<<my.front()<<endl;
                maxx=tempc[0];
                forall(j,1,n-b[i]+1)
                {
                    tempc[j]=tempc[j-1]+my.front()-a[j-1]+a[j-1+b[i]];
//                    cout<<"tempcj"<<tempc[j]<<endl;

                    if(!my.empty() && my.front()==tempp[j])
                        my.pop_front();
                    if(my.empty() || tempp[j+b[i]-b[i+1]-1]<=my.back())
                    my.push_back(tempp[j+b[i]-b[i+1]-1]);
                     else if(tempp[j+b[i]-b[i+1]-1]>my.back())
                     {
                        while(!my.empty() && my.back()<tempp[j+b[i]-b[i+1]-1])my.pop_back();
                        my.push_back(tempp[j+b[i]-b[i+1]-1]);
                     }
                    //print queue
//                    for(auto it=my.begin(); it!=my.end();++it)
//        std::cout << *it << "\n";
//                    cout<<"tempcj"<<tempc[j]<<"myf"<<my.front()<<endl;

                    tempc[j]-=my.front();
                    if(tempc[j]>maxx)maxx=tempc[j];
                }
                //forall(i,0,n)
//             cout<< " d"<<tempc[i]<<"d ";
//             cout<<endl;

             forall(i,0,n)
                    tempp[i]=tempc[i];
            }

        cout << maxx << endl;
        }

        return 0;
}
