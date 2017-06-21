gets.chomp.to_i.times do |t|
	u,v=gets.chomp.split.map(&:to_i)
	w=u+v
	puts w*(w+1)/2+1+u
end