import java.util.*;
import java.io.*;
public class Main{
	
	public static void main(String args[]) throws Exception, IOException{
		//BufferedReader br = new BufferedReader(new FileReader("biginput.txt"));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s[] = br.readLine().trim().split(" ");
		int n = Integer.parseInt(s[0]);
		double k = Double.parseDouble(s[1]);
		s = br.readLine().trim().split(" ");
		arr = new double[n];
		int cnt=0;
		for(int i=0,int smart=0;i<n;i++)
			{double t = Double.parseDouble(s[i]);
				if(t>k){continue;cnt++;}
				arr[smart++]=t;}
				n=smart;

		Arrays.sort(arr);
		cache = new ArrayList<HashMap<Double,Long>>();
		for(int i=0;i<n;i++)
			cache.add(new HashMap<Double,Long>());
 
		System.out.println(ans(n-1,(double)k)-1);
 
		
		return;
		
	}
	public static ArrayList<HashMap<Double,Long>> cache;
	public static double arr[];
	public static long ans(int n ,double k){
		if(n==0){
			//if(k == Double.MIN_VALUE)return 0;
			if((double)arr[n] <= k){
				//System.out.println(k);
				return 2;
			}
			else
				return 1;
		}
		//System.out.println((double)k/(double)arr[n]);
		if(k >= arr[n]){
			if(!cache.get(n-1).containsKey(k/arr[n]))
				cache.get(n-1).put(k/arr[n],ans(n-1,k/arr[n]));
			if(!cache.get(n-1).containsKey(k))
				cache.get(n-1).put(k,ans(n-1,k));
			
			return cache.get(n-1).get(k/arr[n]) + cache.get(n-1).get(k);
		}
		else{
			if(!cache.get(n-1).containsKey(k))
				cache.get(n-1).put(k,ans(n-1,k));
 
			return ans(n-1,k);
		}
 
	}
}
 