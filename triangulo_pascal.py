v = [1]
n_row = 5

for i in range(n_row):
	print(v)
	v.append(0)
	w=[1]
	for j in range(len(v)):
		if j > 0:
			w.append(v[j-1] + v[j])

	v=w
