
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 

gets.chomp.to_i.times do |t|
	n=gets.chomp.split.map(&:to_i)
	a=gets.chomp.split.map(&:to_i)
	
	ai=[]
	ap=[]
	sumai=0
	sumap=0
	a.each do |aa|
		if aa>=0
			ai.push(aa)
			sumai+=aa
		else
			# ap.push(aa)
			sumap+=aa
		end
	end
	ans=sumai*ai.size
	ans+=sumap
	puts ans
end