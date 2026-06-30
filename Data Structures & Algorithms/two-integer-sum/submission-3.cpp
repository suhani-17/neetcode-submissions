class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;
        
        for(int i = 0; i< nums.size(); i++){
            ans[nums[i]] = i;
        }

        for(int i = 0; i<nums.size(); i++){
            int dif = target - nums[i];
            if(ans.count(dif) && ans[dif] != i){
                return{i, ans[dif]};
            }
        }
        return {};
    }
};
