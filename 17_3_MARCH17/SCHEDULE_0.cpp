#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

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

        vector<int> m;
        ll cnt=1;

        forall(i,1,s.length())
        {
            if(s[i]==s[i-1])
                cnt++;
            else
            {
                m.push_back(cnt);
                cnt=1;
            }
        }

        m.push_back(cnt);

        int no2=0;
        if(m.front()==2)no2++;
        if(m.back()==2)no2++;

        bool ans=false;

        forall(i,0,k)
        {

            sort(m.begin(),m.end(),mf);
            ll temp=m.front();
            if(temp==1)
            {
                cout<<"1"<<endl;
                ans=true;
                break;
            }
            if(temp==2 )
            {
                if(no2!=0)
                {
                    m.erase(m.begin());
                    no2--;
                    temp--;
                    m.push_back(floor(temp/2));
                    m.push_back(temp-floor(temp/2));
                }
                else
                {
                    cout<<"2"<<endl;
                    ans=true;
                    break;
                }
            }
            else
            {
                m.erase(m.begin());
                temp--;
                m.push_back(floor(temp/2));
                m.push_back(temp-floor(temp/2));
            }
        }
        if(!ans)
        {
            sort(m.begin(),m.end(),mf);
            cout<<m.front()<<endl;
        }
	}
return 0;
}
