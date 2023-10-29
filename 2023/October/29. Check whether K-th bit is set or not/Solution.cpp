// Check whether K-th bit is set or not
// October 29, 2023
// C++ Code

class Solution {
public:
    bool checkKthBit(int n, int k) {
        int mask = 1 << k; 
        return (n & mask) > 0;
    }
};
