class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> solve;
        for(int i =0 ; i<nums.size();i++){
            if(!solve.insert(nums[i]).second){ //important point to remember!!!
                return true;
            }
            else if ( i>=k){
                solve.erase(nums[i-k]);
            }
        }
        return false;
    }
};

//Leetcode: https://leetcode.com/problems/contains-duplicate-ii/description/