#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define forallr(i,a,b)                for(int i=a-1;i>=b;i--)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007



int main()
{

#ifndef ONLINE_JUDGE
	freopen("CRES04_in.txt","r",stdin);
#endif

    ll n;cin >>n;

    forall(i,0,n)
    {
        string s;
        cin>>s;
        int h[26]={0};
        forall(j,0,s.length())
        {
            if(isupper(s[j]))
                h[s[j]-'A']++;
            else if(islower(s[j]))
                h[s[j]-'a']++;
        }


        int flag=0;
        int ans=1;
        forall(j,0,26)
        {
            if(h[j]!=0)
            {
                if(h[j]==1)
                {

                    if(flag==0)
                        flag=1;
                    else
                        ans=0;
                }
                else if(h[j]%2!=0)
                    ans=0;
            }
        }

        if(ans)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;



    }
    return 0;
}
