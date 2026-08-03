def QuickSort(A,Left,Right):
	if Right-Left<=1:
		return()
	Yellow=Left+1
	for Green in range(Left+1,Right):
		if A[Green]<=A[Left]:
			(A[Green],A[Yellow])=(A[Yellow],A[Green])
			Yellow=Yellow+1
	(A[Yellow-1],A[Left])=(A[Left],A[Yellow-1])
	QuickSort(A,Left,Yellow-1)
	QuickSort(A,Yellow,Right)
		
	return A
Lst=list(map(int,input().split()))
Lt=QuickSort(Lst,0,len(Lst))
print(Lt)