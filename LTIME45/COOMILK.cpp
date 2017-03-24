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
	freopen("COOMILK_in.txt","r",stdin);
#endif

        int T;
        cin>>T;
        while(T--)
        {
            int n;
            cin >>n;
            string s[n];
            forall(i,0,n)
                cin>>s[i];
            bool ans=true;
            forall(i,0,n-1)
                if(s[i]=="cookie" && s[i+1]!="milk")
                    ans=false;
            if(s[n-1]=="cookie")
                ans=false;
            if(ans)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        return 0;
}
