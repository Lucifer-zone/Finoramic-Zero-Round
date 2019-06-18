class Solution:
    # @param A : tuple of strings
    # @return a list of list of integers
    def anagrams(self, A):
            B= list(A)
            C = {}
            row=[]
            ans=[]
            for i in range(len(B)):
                    B[i] = ''.join(sorted(B[i]))
                    if (B[i] in C): 
                            C[B[i]].append(i+1)
                    else:
                            row = [i+1]
                            C[B[i]] = row
            for key,value in C.items():
                    ans.append(value)
            return ans