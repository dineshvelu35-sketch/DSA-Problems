def merge(L,R):
	(C,m,n)=([],len(L),len(R))
	(i,j)=(0,0)
	while i+j<m+n:
		if i==m:
			C.append(R[j])
			j=j+1
		elif j==n:
			C.append(L[i])
			i=i+1
		elif L[i]<=R[j]:
			C.append(L[i])
			i+=1
		elif L[i]>R[j]:
			C.append(R[j])
			j+=1
	print(C)
	return(C)
def mergesort(L,Left,Right):
	if Right-Left<=1:
		return (L[Left:Right])
	if Right-Left>1:
		mid=(Left+Right)//2
		L_part=mergesort(L,Left,mid)
		R_part=mergesort(L,mid,Right)
		return merge(L_part,R_part)
		
Lst=list(map(int,input().split()))
Lt=mergesort(Lst,0,len(Lst))
print(Lt);
