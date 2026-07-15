class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;
        while(left<right){
            int h=min(height[left],height[right]);
            int breadth=right-left;
            int area=h*breadth;
            maxarea=max(maxarea,area);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxarea;
    }
};