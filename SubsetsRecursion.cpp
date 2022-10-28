/*Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]


Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.*/

class Solution
{
public:
    vector<vector<int>> ans;

    void solve(vector<int> &nums, int i, vector<int> &x)
    {
        // base case
        if (i == nums.size())
        {
            ans.push_back(x);
            return;
        }
        // recursive case
        // pehla case include mat karo inside
        solve(nums, i + 1, x);
        // doosra case, include karlo inside
        x.push_back(nums[i]);
        solve(nums, i + 1, x);
        x.pop_back();
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> x;
        solve(nums, 0, x);
        return ans;
    }
};