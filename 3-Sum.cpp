int Solution::threeSumClosest(vector<int> &A, int B) {
    int len=A.size();
    int i=0,j=len-1;
 
  int max;
  sort(A.begin(),A.end());
  int diff=INT_MAX;
  int sum=0;
    while(j-i>=2)
    {
        int m=i+1;
        j= len-1;
    while(j-m>=1)
        {
            sum=A[i]+A[m]+A[j];
            int n_diff=abs(sum-B);
            if(n_diff<diff)
            {
             diff=n_diff;
             max=sum;
            }
    
            if(sum>B)
              j--;
            else
              m++;
        }
              i++;
    }
    return max;
}
