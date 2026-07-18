class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
                //agar ye nhi krenge toh values repeat hongi like
                //{-1,0,1},{-1,1,0}
            }
            int left=i+1;
            int right=n-1;
            int sum=-1*nums[i];
            while(left<right){
                int s=nums[left]+nums[right];
                if(sum==s){
                    result.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(sum<s){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return result;
    }
};