class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>frequencyOfElements;
        for(auto&element:nums ){
            frequencyOfElements[element]++;
        }
        int n= nums.size();
        vector<vector<int>>v(n+1);
        for(auto&it:frequencyOfElements){
            v[it.second].push_back(it.first);
        }

        vector<int>ans;

        for(int i=n ; i>0 ;i--){
            
            for(int num:v[i]){
                ans.push_back(num);
                if(ans.size()==k)
                    return ans;
            }
        }

        return ans;

      
    }
};
