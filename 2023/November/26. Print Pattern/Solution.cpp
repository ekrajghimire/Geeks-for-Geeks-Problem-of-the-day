// Print Pattern
// November 26, 2023
// C++ Code

class Solution{
public:
    void backToNormal(int& cpy, vector<int>& ans, int n){
        if(cpy > n){
            return;
        }
        
        ans.push_back(cpy);
        cpy += 5;
        backToNormal(cpy, ans, n);
    }

    void reduceToZero(int& cpy, vector<int>& ans){
        if(cpy <= 0){
            return;
        }
        
        ans.push_back(cpy);
        cpy -= 5;
        reduceToZero(cpy, ans);
    }

    vector<int> pattern(int n){
        int cpy = n;
        vector<int> ans;
        reduceToZero(cpy, ans);
        backToNormal(cpy, ans, n);
        return ans;
    }
};
