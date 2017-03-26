#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define pb push_back
#define mod 1000000007

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

map<char,int> tt;
llu solve(char a[52][52],int n)
{
    llu ans=1,flag=1;
    rep(i,1,n)
    {
        rep(j,1,n)
        {
            if(a[i][j]=='?')
            {   
                tt['.']=0;
                tt['?']=0;
                tt['B']=0;
                tt['P']=0;
                tt['G']=0;
                tt[a[i+1][j]]++;
                tt[a[i-1][j]]++;
                tt[a[i][j+1]]++;
                tt[a[i][j-1]]++;
                if(tt['G']>0)
                    return 0;
                else if(tt['B']>0 && tt['P']>0)
                    return 0;
                else if(tt['P']>0 && tt['B']==0)
                {    //ans*=1;
                    a[i][j]='P';
                    if(a[i+1][j]=='?')a[i+1][j]='P';
                    if(a[i-1][j]=='?')a[i-1][j]='P';
                    if(a[i][j+1]=='?')a[i][j+1]='P';
                    if(a[i][j-1]=='?')a[i][j-1]='P';
                }
                else if(tt['B']>0 && tt['P']==0)
                {    //ans*=1;
                    // cout<<"he"<<ans;
                    a[i][j]='B';
                    if(a[i+1][j]=='?')a[i+1][j]='B';
                    if(a[i-1][j]=='?')a[i-1][j]='B';
                    if(a[i][j+1]=='?')a[i][j+1]='B';
                    if(a[i][j-1]=='?')a[i][j-1]='B';
                }
                else if(tt['?']==0){
                    a[i][j]='B';
                    ans=(ans*3)%mod;
                }
                else{
                    //combi of . and ?
                    char b[52][52],c[52][52];
                    rep(p,0,n+1)
                    {
                        rep(q,0,n+1)
                        {
                            b[p][q]=a[p][q];
                            c[p][q]=a[p][q];
                        }
                    }
                    b[i][j]='P';
                    if(b[i+1][j]=='?')b[i+1][j]='P';
                    if(b[i-1][j]=='?')b[i-1][j]='P';
                    if(b[i][j+1]=='?')b[i][j+1]='P';
                    if(b[i][j-1]=='?')b[i][j-1]='P';
                    c[i][j]='B';
                    if(c[i+1][j]=='?')c[i+1][j]='B';
                    if(c[i-1][j]=='?')c[i-1][j]='B';
                    if(c[i][j+1]=='?')c[i][j+1]='B';
                    if(c[i][j-1]=='?')c[i][j-1]='B';
                    //   cout<<"s"<<n<<"ss";
                    // rep(p,0,n)
                    // {
                    //     rep(q,0,n)
                    //     {
                    //         cout<<c[p][q];
                    //     }
                    // }
                    // cout<<"sad"<<endl;
                    return flag==0?0:ans*(((solve(b,n)%mod)+(solve(c,n)%mod))%mod)%mod;
                }
            }
            else if(a[i][j]=='B')
            {
               
                if((a[i+1][j]=='P' || a[i+1][j]=='G'))flag=0;
                if((a[i-1][j]=='P' || a[i-1][j]=='G'))flag=0;
                if((a[i][j+1]=='P' || a[i][j+1]=='G'))flag=0;
                if((a[i][j-1]=='P' || a[i][j-1]=='G'))flag=0;
            }
            else if(a[i][j]=='P')
            {
                
                if((a[i+1][j]=='B' || a[i+1][j]=='G'))flag=0;
                if((a[i-1][j]=='B' || a[i-1][j]=='G'))flag=0;
                if((a[i][j+1]=='B' || a[i][j+1]=='G'))flag=0;
                if((a[i][j-1]=='B' || a[i][j-1]=='G'))flag=0;
            }
           else if(a[i][j]=='G')
            {
              
                
                if(a[i][j-1]=='B' || a[i][j-1]=='G' || a[i][j-1]=='P')flag=0;
                if(a[i][j+1]=='B' || a[i][j+1]=='G' || a[i][j+1]=='P')flag=0;
                if(a[i+1][j]=='B' || a[i+1][j]=='G' || a[i+1][j]=='P')flag=0;
                if(a[i-1][j]=='B' || a[i-1][j]=='G' || a[i-1][j]=='P')flag=0;
            
            }

        }
    }
    return flag==0?0:ans;
}
int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("SPECIES_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int T;
    cin>>T;
    while(T--)
    {
char a[52][52];
int n;
        cin>>n;

        rep(i,0,n+2)
        {
            a[0][i]='X';
            a[i][0]='X';
            a[n+1][i]='X';
            a[i][n+1]='X';
        }
        rep(i,0,n)
        {
            rep(j,0,n)
            {
                cin>>a[i+1][j+1];
            }
        }

        llu temp=solve(a,n+1)%mod;
        cout<<temp<<endl;
}
//  --------------------------------------------------------------------------------------

return 0;
}

