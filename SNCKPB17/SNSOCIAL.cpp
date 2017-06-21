#include <bits/stdc++.h>
using namespace std;

typedef unsigned long int uli;

uli max2(uli a, uli b){
	
	return (a>b)?a:b;
}

uli max3(uli a,uli b, uli c){
	
	return max2(max2(a,b),c);
}

int main(){
		
		#ifndef ONLINE_JUDGE
			freopen("SNSOCIAL_in.txt","r",stdin);
		#endif
		int t,n,m,i,j,k, flag;
		
		cin>>t;
		
		int min_hours[t];
		
		if(0<t<5){
			
			for(i=0;i<t;i++){
				
				min_hours[i] = 0;
				
				cin>>n;
				cin>>m;	
				
				if(0<n<501 && 0<m<501){
				
					uli a[n+2][m+2], b[n+2][m+2];
				
					for(j=0;j<(n+2);j++){
					
						for(k=0;k<(m+2);k++){
							
							if(j==0 || k==0 || j==(n+1) || k==(m+1)){
								
								a[j][k] = 0;
								b[j][k] = 0;
								
							} 
							else{
							
								cin>>a[j][k];
								
								b[j][k] = a[j][k];	
								
							}
							
						}
					
					}
					
					flag = 0;
					vector< pair<pair<int,int> ,uli> > v;
					for(j=1;j<=n;j++){
							
						for(k=1;k<=m;k++){
							
								uli temp = max2(max3(max3(max3(a[j][k-1],a[j-1][k],a[j+1][k]),a[j][k+1],a[j-1][k-1]),a[j+1][k+1], a[j-1][k+1]),a[j+1][k-1]); 
								
								if(temp > a[j][k]){
									flag = 1;
									v.push_back(make_pair(make_pair(j,k),temp));
									// b[j][k] = temp;
								}
								
						}	
						
						if(j==n && flag == 1){
							
							min_hours[i] ++;
							flag = 0;
							
							// for(j=1;j<=n;j++){
							
							// 	for(k=1;k<=m;k++){
									
							// 		a[j][k] = b[j][k];
							// 	}
							// }

							
							for(long long p=0;p<v.size();p++)
							{
								a[v[p].first.first][v[p].first.second]=v[p].second;
							}
							j=0;
							
						}
						
					}
					
				}
				
			}

			for(i=0;i<t;i++){
				
				cout<<min_hours[i]<<endl;
			}			
		}
		
	return 0;
}
