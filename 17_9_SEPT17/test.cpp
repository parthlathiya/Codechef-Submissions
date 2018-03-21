#include <bits/stdc++.h>
using namespace std;


int main()
{
	
	freopen("test_in.txt","r",stdin);

	int a[10];

	for(int i=0;i<10;i++)
		cin>>a[i];

	for(int i=0;i<10;i++)
	{
		int temp=0;
		while(temp<i && a[temp]<=a[i])temp++;
		int idx=i;
		int cur_ele=a[i];
		while(idx!=temp){
			a[idx]=a[idx-1];
			idx--;
		}
		a[temp]=cur_ele;
	}

	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";

}