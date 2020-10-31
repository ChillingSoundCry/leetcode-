// 两数之和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a; 
        bool x = false;
        for(int i=0;i < nums.size()&&!x;i++)
        {
            cout << nums[i] << endl;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    x = true;
                    a = { i,j };
                    break;

                }
            }        
        }
        return a;
    }
};
int main()
{
    Solution s;
    vector <int> nums;
    vector <int> a;
    nums = { 3,2,4 ,1,1,1};
    a = s.twoSum(nums, 6);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
