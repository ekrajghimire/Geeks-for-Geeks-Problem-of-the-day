// Smith Number
// December 9, 2023
// C++ Code

class Solution {
      
    public:
    int smithNum(int n) {
        vector<int> primeFactors;
        int num = n;
    
        for (int i = 2; i < n; i++) {
            while (num % i == 0) {
                primeFactors.push_back(i);
                num /= i;
            }
        }
    
        int number=n;
        int sum = 0;
            while (number) {
                int digit = number % 10;
                sum += digit;
                number /= 10;
            }
    
        int primeFactorSum = 0;
        for (int i = 0; i < primeFactors.size(); i++) {
            int currentFactor = primeFactors[i];
            while (currentFactor) {
                int digit = currentFactor % 10;
                primeFactorSum += digit;
                currentFactor /= 10;
            }
        }
    
        return sum == primeFactorSum;
    }
};
