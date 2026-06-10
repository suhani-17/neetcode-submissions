class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(2*n);
        
        int i = 0;
        while(i<(2*n)){
            if(i>=n){
                ans[i] = (nums[i%n]);
            }
            else{
                 ans[i] = (nums[i]);
            }
            i++;           
        }
        return ans;
    }
};