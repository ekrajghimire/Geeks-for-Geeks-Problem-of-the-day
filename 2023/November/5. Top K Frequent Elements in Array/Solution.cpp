// Top K Frequent Elements in Array
// November 5, 2023
// C++ Code

class Solution {
  public:
      vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> mp;
        priority_queue<pair<int,int> > pq;
        for(auto it:nums)mp[it]++;
      
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
