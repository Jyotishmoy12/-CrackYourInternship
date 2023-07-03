#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	// Write your code here.
    int fast=nums[0];
    int slow=nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(fast!=slow);
    fast=nums[0];
    while(fast!=slow){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}
