class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int j=0; // pointing to zero
     // now iterate over nums using i
     for(int i=0;i<nums.size();i++){
         if(nums[i]!=0){
             // if i points to non zero element and since j is already pointing towards the zero so swap them and increse j
             swap(nums[i], nums[j]);
             j++;
         }
     }  
    }
};
