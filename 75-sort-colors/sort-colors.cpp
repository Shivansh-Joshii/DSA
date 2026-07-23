class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int lowpt=0,midpt=0,highpt=n-1;
        while(highpt>=midpt){
            if(nums[midpt]==2){
                nums[midpt]=nums[highpt];
                nums[highpt]=2;
                highpt--;
            }
            else if(nums[midpt]==1){
                midpt++;
            }
            else if(nums[midpt]==0){
                nums[midpt]=nums[lowpt];
                nums[lowpt]=0;
                midpt++;
                lowpt++;
            }
        }
        return;
    }
};