class Solution {
public:
    int findMin(vector<int>& nums) {
        int m = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(m>nums[i]){
                m = nums[i];
            }
        }
        return m;
    }
};
