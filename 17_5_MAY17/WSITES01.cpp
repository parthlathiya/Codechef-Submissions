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
 
struct trienode
{
    trienode *children[26];
    // bool endofword;
};

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("WSITES01_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    ll n;
    cin>>n;

    struct trienode *r=(struct trienode *)malloc(sizeof(struct trienode));
    rep(i,0,26)
        r->children[i]=NULL;
    // r->endofword=false;
    std::vector<string> v;
    rep(i,0,n)
    {
        char t;
        cin>>t;
        if(t=='+')
        {
            string s;
            cin>>s;
            struct trienode *temp=r;
            rep(j,0,s.length())
            {
                if(!temp->children[s[j]-'a'])
                {
                    struct trienode *tempo=(struct trienode *)malloc(sizeof(struct trienode));
                    rep(i,0,26)
                        tempo->children[i]=NULL;
                    // tempo->endofword=false;
                    temp->children[s[j]-'a']=tempo;
                }
                temp=temp->children[s[j]-'a'];
            }
            // temp->endofword=true;

            //insert in trie node
        }
        else
        {
            string s;
            cin>>s;
            v.pb(s);
            //push in vector
        }
    }
    
    //travers vector and push prefix in ans vector;
    std::set<string> ans; 
    // std::vector<string> ans;
    int flag=0;
    rep(i,0,v.size())
    {
        string s=v[i];

        struct trienode *temp=r;
        ll j;
        for(j=0;j<s.length();j++)
        {
            if(!temp->children[s[j]-'a'])
            {
                ans.insert(s.substr(0,j+1));
                break;
            }
            temp=temp->children[s[j]-'a'];
        }
        if(j==s.length())flag=1;
        
    }
    if(!flag)
    {
        //print size of vector
        cout<<ans.size()<<endl;
    
        //sort ans vector and print
        // sort(ans.begin(), ans.end());
        set<string>::iterator it;
        for(it=ans.begin();it!=ans.end();it++)
            cout<<*it<<endl;
    }
    else
        cout<<"-1"<<endl;
//  --------------------------------------------------------------------------------------

return 0;
}
