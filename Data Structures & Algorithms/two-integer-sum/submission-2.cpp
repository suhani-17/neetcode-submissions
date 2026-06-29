class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> test;
        for(int i = 0; i< nums.size(); i++){
            test.push_back({nums[i], i});
        }
        sort(test.begin(), test.end());
        int i = 0; 
        int j = nums.size() - 1;
        vector<int>ans;
        while(i<j){
            int sum = test[i].first + test[j].first;
            if(sum == target){
                return {min(test[i].second , test[j].second), max(test[i].second, test[j].second)};
            }
            else if(sum > target){
                j--;
            }else if(sum < target){
                i++;
            }
        }
        return ans;
    }
};
