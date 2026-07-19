class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        double diff_max=INFINITY;
        int resum=0;
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int s=nums[i]+nums[left]+nums[right];
                if(s==target){
                    return s;
                }
                if(s<target){
                    int diff=target-s;
                    if(diff_max>diff){
                        diff_max=diff;
                        resum=s;
                    }
                    left++;
                }
                else if(s>target){
                    int diff=s-target;
                    if(diff_max>diff){
                        diff_max=diff;
                        resum=s;
                    }
                    right--;
                }
            }
        }
        return resum;
    }
};