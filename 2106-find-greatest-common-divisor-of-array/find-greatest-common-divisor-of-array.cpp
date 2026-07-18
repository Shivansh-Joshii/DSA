class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0];
        int max=nums[0];
        for(int x : nums){
            if(x < min)
                min = x;

            if(x > max)
                max = x;
        }
        max=abs(max);
        while(min!=0){
            int temp=min;
            min=max%min;;
            max=temp;
        }
        return max;
    }
};