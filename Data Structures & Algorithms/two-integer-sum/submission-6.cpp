class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;
        
        for(int i = 0; i< nums.size(); i++){
            int dif = target - nums[i];

            if(ans.find(dif) != ans.end()){
                int mini = min(i, ans[dif]);
                int maxi = max(i, ans[dif]);
                return{mini, maxi};
            }
           ans.insert({nums[i], i});
        }
        return {};
    }
};
