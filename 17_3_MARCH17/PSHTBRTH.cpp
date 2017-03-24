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


bool possndisrec(int i,int j)
{
    return false;

//convert back to matrix and travser towards baundry and check all other numbers are 0 in matrix

}

//grundy number calculation has one bug and that is when matrix has more than 1 connected component
// then final gr will be xor of all such compo

int main()
{

#ifndef ONLINE_JUDGE
	freopen("PSHTBRTH_in.txt","r",stdin);
#endif
    map<int,vector<int> > mm;
        //mm grnum-> matrixencodevlaue

    int gr[65536];
    int maps;
    gr[0]=0;
    maps=1;
    (mm[0]).pb(0);
    forall(i,1,65536)
    {
        int s=0,st=0;
        while(  s<maps && st<mm[s].size() )
        {
            if(possndisrec(i,mm[s].at(st)))
                s++;
            else
                st++;
        }
        gr[i]=s;
        maps=maX(maps,s+1);
        (mm[s]).pb(i);
        if(i%1000==0)cout<<i<<" "<<gr[i]<<endl;
    }


    int T;
    cin>>T;

	while(T--)
	{
		int n,m;
        cin >> n>>m;
        int a[n];
        int temp;
        forall(i,0,n)
        {
            int tt=15;
            a[i]=0;
            forall(j,0,4)
            {
                string s;
                cin>>s;
                forall(k,0,4)
                {
                    a[i]+=((int)s[k])*(2,tt--);
                }
            }
        }
        forall(p,0,m)
        {
            cin>>temp;
            if(temp==1)
            {
                int l,r;
                cin>>l>>r;
                int ans;
//                forall(i,l,r+1)
//                {
//                    if(i==l)
//                        ans=gr[i];
//                    else
//                        ans=ans^gr[i];
//                }
                if(ans!=0)
                    cout<<"Pishty"<<endl;
                else
                    cout<<"Lotsy"<<endl;
            }
            else
            {
                int pos;
                cin>>pos;
                int tt=15;
                a[pos]=0;
                forall(j,0,4)
                {
                    string s;
                    cin>>s;
                    forall(k,0,4)
                    {
                        a[pos]+=((int)s[k])*(2,tt--);
                    }
                }
            }
        }
    }
return 0;
}
