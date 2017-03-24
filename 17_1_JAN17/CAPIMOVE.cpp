#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

bool mf(int i,int j){return i>j;}

void printvec(vector<int> x)
{
    cout << endl <<"vec starts";
    for(vector<int>::iterator it = x.begin(); it < x.end(); ++it)
    cout << *it << " ";
    cout << "vec ends"<<endl;
}
int main()
{

#ifndef ONLINE_JUDGE
	freopen("CAPIMOVE_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		int N;
        cin >> N;
//        cout << N;
        ll p[N];
        ll ans[N];
        forall(i,0,N)
        ans[i]=0;
        forall(i,0,N)
        cin >> p[i];

        vector<int> o(p, p + N);
        sort(p,p+N,mf);

        forall(i,0,N)
        p[i] = find(o.begin(), o.end(), p[i]) - o.begin();

        vector<int> v[N+1];
        forall(i,0,N-1)
        {
            int t1,t2;
            cin >> t1 >> t2;
            v[t1].push_back(t2);
            v[t2].push_back(t1);
        }
//        forall(i,1,N+1)
//        printvec(v[i]);

//        forall(i,0,N)
//        cout << p[i]<<" ";

//        cout<<"check"<<binary_search(v[1].begin(), v[1].end(),3);
        forall(i,1,N+1)
        {   int k;
            for(k=0;k<N;k++)
            {
                if(i!=(p[k]+1) and !binary_search(v[i].begin(), v[i].end(),p[k]+1))
                {
                    ans[i-1]=p[k]+1;
                    break;
                }
            }
        }
        forall(i,0,N-1)
        cout << ans[i] << " ";
        cout << ans[N-1] << endl;
    }
return 0;
}
