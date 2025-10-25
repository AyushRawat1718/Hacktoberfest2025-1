class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans = {-1,-1};
        int left = 0, right = numbers.size()-1;
        while (left < right){
            int currSum = numbers[left] + numbers[right];
            if (currSum == target){
                ans[0] = left+1;
                ans[1] = right+1;
                break;
            }
            else if (currSum < target) left++;
            else right--;
        }
        return ans;   
    }
};
