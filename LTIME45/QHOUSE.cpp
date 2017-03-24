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


        int l=0;
        int r=2000;
        int p1,p2,p3,p4;
        while(l<r-1)
        {
            string res;
            cout<<"? "<<floor((l+r)/2)<<" 0"<<endl;
            fflush(stdout);
            cin>>res;
            if(res=="YES" && floor((l+r)/2)==1000){
                l=1000;
                break;
            }
            if(res=="YES")
                l=floor((l+r)/2);
            else
                r=floor((l+r)/2);
//                cout<<l<<r;
        }
        p1=l;

        l=0;
        r=2000;
        while(l<r-1)
        {
            string res;
            cout<<"? 0"<<" "<<floor((l+r)/2)<<endl;
            fflush(stdout);
            cin>>res;
            if(res=="YES" && floor((l+r)/2)==1000){
                l=1000;
                break;
            }
            if(res=="YES")
                l=floor((l+r)/2);
            else
                r=floor((l+r)/2);
        }
        p2=l;
//
//        l=0;
//        r=2000;
//        while(l<r+1)
//        {
//            string res;
//            cout<<"? 0"<<" "<<floor((l+r)/2)<<endl;
//            fflush(stdout);
//            cin>>res;
//
//            if(res=="YES")
//                l=floor((l+r)/2);
//            else
//                r=floor((l+r)/2);
//        }
//        p3=l;

//        l=0
//        r=((int)(((p2-p3)(p1+1))/p1)+p3)*2;
//        while(l<r+1)
//        {
//            string res;
//            cout<<"? "<<p1+1<<" "<<floor((l+r)/2)<<endl;
//            fflush(stdout);
//            cin>>res;
//
//            if(res=="YES")
//                r=floor((l+r)/2);
//            else
//                l=floor((l+r)/2);
//        }
//        p3=l;
//
//        p5=(int)((p4-p3)*p1)/(p2-p3)

//        tri base=2*p5;
//        height=p3-p4;

        l=p1;
        r=2000-p1;
//        ((int)(((p2-p3)(p1+1))/p1)+p3)*2;
        while(l<r-1)
        {
            string res;
            cout<<"? "<<floor((l+r)/2)<<" "<<2*p1<<endl;
            fflush(stdout);
            cin>>res;
            if(res=="YES" && floor((l+r)/2)==1000){
                l=1000;
                break;
            }
            if(res=="YES")
                l=floor((l+r)/2);
            else
                r=floor((l+r)/2);
        }
        p3=l;
//        cout<<"p1"<<p1<<"p2"<<p2<<"p3"<<p3<<endl;
        cout<<"! "<<(2*p1*2*p1) + (p3*(p2-2*p1))<<endl;
        return 0;
}
