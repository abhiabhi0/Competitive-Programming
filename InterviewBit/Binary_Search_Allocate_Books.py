# https://www.interviewbit.com/problems/allocate-books/

class Solution:
	# @param A : list of integers
	# @param B : integer
	# @return an integer
	def books(self, A, B):
        
        if len(A) < B:
            return -1
        mn = max(A)
        mx = sum(A)
        ans = -1
            
        while mn <= mx:
            mid = (mn + mx)//2
            stud = 1 
            pg = 0 
            for p in A:
                nx_pg = p 
                if pg + nx_pg <= mid:
                    pg = pg + nx_pg
                else:
                    stud = stud+1
                    pg = nx_pg
                    
                if stud > B:
                    break
            
            if stud <= B:
                ans = mid
                mx = mid-1
            else:
                mn = mid+1
        return ans
