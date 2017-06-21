#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define pb push_back
#define mod 1e9+7

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/


template<typename T> void print_queue(T& q) {
    while(!q.empty()) {
        std::cout << q.top() << " ";
        q.pop();
    }
    std::cout << '\n';
}


int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("ICL1704_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    ll t;
    scanf("%lld",&t);
 
    while(t--)
    {
        int m;
        scanf("%d",&m);
        llu tt;
        // vector<llu> my;
        priority_queue<llu, std::vector<llu>, std::greater<llu> > my;
         rep(i,0,m)
        {
                       scanf("%llud",&tt);
        my.push(tt);
    }
    llu ans=0;
  //   for (unsigned i=0; i<my.size(); ++i)
  //   std::cout << ' ' << my[i];
  // std::cout << '\n';
//print_queue(my);
//my.pop();
//print_queue(my);
            
        rep(i,1,m)            
        {
            //sort(my.begin(), my.begin()+m-i+1);
            llu t1=my.top();
            my.pop();
         //   print_queue(my);
            llu t2=my.top();
            my.pop();
            // cout<<t1<<t2<<endl;
            my.push(t1+t2);
            ans+=t1+t2-1;
            // (my.at(0)+my.at(1)-1);
            // my.pb(my.at(0)+my.at(1));
            //  // cout<<my.at(0)<<my.at(1)<<endl;
            // my.erase(my.begin());
            // my.erase(my.begin());
            // // cout<<ans;
        }
        printf("%lld\n",ans);
     }
        
//  --------------------------------------------------------------------------------------

return 0;
}
