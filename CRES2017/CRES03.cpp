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
	freopen("CRES03_in.txt","r",stdin);
#endif

    int faltu;
    cin>>faltu;
    string s;
    cin >>s;
    int k;
    cin>>k;

    forall(i,0,s.length())
    {
        if(isupper(s[i]))
            printf("%c",((s[i]-'A'+k)%26)+'A');
        else if(islower(s[i]))
            printf("%c",((s[i]-'a'+k)%26)+'a');
        else
            cout<<s[i];
    }
    return 0;
}
