// 独一无二的出现次数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int>nums;
        nums.push_back(0);
        int i = 0, j = 1, x = 0;
        while (j < arr.size())
        {
            if (arr[i] == arr[j])
            {
                i += 1, j += 1,nums[x]+=1;
            }
            else if (arr[i] != arr[j])
            {
                nums[x]+=1,i += 1, j += 1, x += 1; 
                nums.push_back(0);
            }
        }
        nums[x] += 1;
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << endl;
        }
        cout << "fuck" << endl;
        return (nums.size() == unordered_set<int>(nums.cbegin(), nums.cend()).size());
    }
};
int main()
{
    vector<int> nums(7);
    nums = { 3,1,2,2,1,1 ,3,3};
    Solution a;
    cout << a.uniqueOccurrences(nums) << endl;
}
