#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

bool mf(int i,int j){return i>j;}


DFS(ll s,ll N,bool **df,bool *v)
{
    v[s]=true;
    ll i=0;
    while(1)
    {
        if(df[s][i] && !v[i] && i<N)
        {
        cout <<i+1<<" ";
        DFS(i,N,df,v);
        i++;
        }
        else
            if(i>=N)break;
            else i++;
    }
}



void printpath(ll N,bool **df)
{
//    forall(i,0,N)
//    forall(j,0,N)
//    {
//    cout << df[i][j];
//    }

    bool *v;
    v=new bool[N];

    forall(j,0,N)
    v[j]=false;

cout<<"1"<<" ";
    DFS(0,N,df,v);

}




int main()
{

#ifndef ONLINE_JUDGE
	freopen("TOURISTS_in.txt","r",stdin);
#endif


		ll N,E;
        cin >> N >> E;
        ll d[N]={0};

        bool **gr;
        gr = new bool*[N];

        forall(i,0,N)
        gr[i] = new bool[N];
        forall(i,0,N)
            forall(j,0,N)
                gr[i][j]=false;

        forall(i,0,E)
        {
            ll a,b;
            cin >> a >>b;
            gr[a-1][b-1]=true;
            gr[b-1][a-1]=true;
            d[a-1]++;
            d[b-1]++;
        }
        int i;
        for(i=0;i<N;i++)
        {
            if(d[i]==0 || d[i]%2!=0)
                break;
        }
        if(i!=N)
        {
            cout<<"NO";
            return 0;
        }
        cout << "YES"<<endl;
        printpath(N,gr);
        return 0;
}
