//给定一个数组 nums 和滑动窗口的大小 k，请找出所有滑动窗口里的最大值。
//
//示例 :
//
//输入: nums = [1, 3, -1, -3, 5, 3, 6, 7], 和 k = 3
//输出 : [3, 3, 5, 5, 6, 7]
//解释 :
//
//	滑动窗口的位置                最大值
//	-------------- - ---- -
//	[1  3 - 1] - 3  5  3  6  7       3
//	1[3 - 1 - 3] 5  3  6  7       3
//	1  3[-1 - 3  5] 3  6  7       5
//	1  3 - 1[-3  5  3] 6  7       5
//	1  3 - 1 - 3[5  3  6] 7       6
//	1  3 - 1 - 3  5[3  6  7]      7
//
//	来源：力扣（LeetCode）
//	链接：https ://leetcode.cn/problems/hua-dong-chuang-kou-de-zui-da-zhi-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        if (nums.size() == 0 || k == 0)
            return {};
        vector<int> arr;
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            int tmp = INT_MIN;
            for (int j = i; j < i + k; j++)
            {
                tmp = max(tmp, nums[j]);
            }
            arr.push_back(tmp);
        }
        return arr;
    }
};