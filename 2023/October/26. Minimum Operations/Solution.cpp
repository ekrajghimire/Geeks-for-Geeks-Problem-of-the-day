// Minimum Operations
// October 26, 2023
// C++ Code


class Solution
{
  public:
    int minOperation(int n)
    {
        int count = 0;
        while(n!=1) {
            count += (n%2)+1;
            n = n>>1;
        }
        return count + 1;
    }
};
