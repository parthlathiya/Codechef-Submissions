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


int main()
{

#ifndef ONLINE_JUDGE
	freopen("ROBOTG_in.txt","r",stdin);
#endif

	int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int minh=0,maxh=0,minv=0,maxv=0;
        int x=0,y=0;
        forall(i,0,s.length())
        {
            if(s[i]=='L')
            {
                x--;
                minh=miN(minh,x);
            }
            else if(s[i]=='R')
            {
                x++;
                maxh=maX(maxh,x);
            }
            else if(s[i]=='U') 
            {
                y--;
                minv=miN(minv,y);
            }
            else if(s[i]=='D')
            {
                y++;
                maxv=maX(maxv,y);
            }
        }
        int h=maxh-minh+1;
        int v=maxv-minv+1;
        if(h<=m && v<=n)
            cout<<"safe"<<endl;
        else
            cout<<"unsafe"<<endl;
    }
    return 0;
}
