class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0; 
        int leftPtr=0, rightPtr=height.size()-1;
        while(leftPtr < rightPtr){
            int width= rightPtr - leftPtr;
            int ht= min(height[leftPtr], height[rightPtr]);
            int currWater= width * ht;
            maxWater= max(maxWater,currWater);
            height[leftPtr] < height[rightPtr] ? leftPtr++ : rightPtr--;
        }
        return maxWater;
    }
};