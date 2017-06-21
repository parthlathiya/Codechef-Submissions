#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE
		freopen("SNELECT_in.txt","r",stdin);
	#endif

	int t,s,i,j;
	
	char line[100][101];
	
	cin>>t;
	
	int s_votes , m_votes ;	
	for(i=0;i<t;i++)
		cin>>line[i];	
	for(j=0;j<t;j++){

		m_votes = 0;
		s_votes = 0;

		for(i=0; line[j][i] != '\0';i++) {
			if(line[j][i] == 'm') {
				if(i!=0 && line[j][i-1]=='s')
					line[j][i-1]='c';
				else if(line[j][i+1]=='s')
					line[j][i+1]='c';
			}
		}
		for(i=0; line[j][i] != '\0';i++) {
			if(line[j][i] == 'm')
				m_votes++;	
			else if(line[j][i] == 's')
				s_votes++;
		}
		if(s_votes > m_votes)				
			cout<<"snakes"<<endl;
		else if(m_votes > s_votes)

			cout<<"mongooses"<<endl;
		else
			cout<<"tie"<<endl;
	}
	
	
	return 0;
}