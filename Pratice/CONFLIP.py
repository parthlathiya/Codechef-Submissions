import math
T=int(input())

for i in range(T):
	G=int(input())

	for i in range(G):
		I, N, Q=map(int,input().split())
		
		if I==Q:
			print(N-math.ceil(N/2))
		else:
			print(math.ceil(N/2))	