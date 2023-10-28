// Bleak Numbers
// October 28, 2023
// C++ Code

class Solution {
public:
    int is_bleak(int n) {
        for(int i = 1; i <= log2(n); ++i) {
            int x = n - i;
            int setBits = __builtin_popcount(x);
            if(setBits + x == n)
                return 0;
        }
        return 1;
    }
};
