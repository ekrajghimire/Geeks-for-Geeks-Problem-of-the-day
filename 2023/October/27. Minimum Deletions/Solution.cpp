// Minimum Deletions
// October 27, 2023
// C++ Code

class Solution{ 

public: 

    // Longest Palindromic Subsequence 

    int minimumNumberOfDeletions(string s) {  

        int n = s.size(); 

        string temp = s; 

        reverse(temp.begin(), temp.end()); 

         

        vector<int> prev(n + 1), curr(n + 1); 

        for(int i = 1; i <= n; i++) { 

            for(int j = 1; j <= n; j++) { 

                if(s[i - 1] == temp[j - 1]) 

                    curr[j] = 1 + prev[j - 1]; 

                else 

                    curr[j] = max(prev[j], curr[j - 1]); 

            } 

             

            prev = curr; 

        } 

         

        return n - prev[n]; 

    }  

};
