
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 


at = int(input().strip())
for att in range(at):
	u = list(map(int, input().strip().split()))
	u.remove(len(u)-1)
	print(max(u))