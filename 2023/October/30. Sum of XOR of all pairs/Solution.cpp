// Sum of XOR of all pairs
// October 30, 2023
// C++ Code

class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
   long long int sumXOR(int arr[], int n)
    {
        long long int ans=0;
        
        int cnt1[32]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                if(arr[i]&(1<<j))
                 cnt1[j]++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                if(arr[i]&(1<<j))
                {
                    ans+=1ll*(n-cnt1[j])*(1<<j);
                }
                else
                {
                    ans+=1ll*cnt1[j]*(1<<j);
                }
            }
        }
      return ans/2;    
    }
};
