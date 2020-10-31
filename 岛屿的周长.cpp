// 岛屿的周长.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束
/*
给定一个包含 0 和 1 的二维网格地图，其中 1 表示陆地 0 表示水域。

网格中的格子水平和垂直方向相连（对角线方向不相连）。整个网格被水完全包围，但其中恰好有一个岛屿（或者说，一个或多个表示陆地的格子相连组成的岛屿）。

岛屿中没有“湖”（“湖” 指水域在岛屿内部且不和岛屿周围的水相连）。格子是边长为 1 的正方形。网格为长方形，且宽度和高度均不超过 100 。计算这个岛屿的周长。
*/
//

#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int Perimeter = 0;
        //左右各加一圈0
        for (int i = 0; i < grid.size(); i++) {
            grid[i].push_back(0);
            grid[i].insert(grid[i].begin(),0);
        }
        //上下各加一圈0
        
        vector <int> a(grid[0].size(), 0);
        grid.push_back(a);
        grid.insert(grid.begin(),a);
        //实体样子/**/
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) { cout << grid[i][j] << " "; }cout << endl;
        }
            
        for (int y = 1; y < grid.size(); y++) {
            for (int x = 1; x < grid[y].size(); x++){
                if(grid[y][x] == 1){
                    (!grid[y + 1][x]) ? (Perimeter++) : 0;
                    (!grid[y - 1][x]) ? (Perimeter++) : 0;
                    (!grid[y][x + 1]) ? (Perimeter++) : 0;
                    (!grid[y][x - 1]) ? (Perimeter++) : 0;
                }          
            }
        }
        return Perimeter;
    }
};
int main()
{
    vector <vector<int>> x;
    x = { {0,1,0,0},
          {1,1,1,0},
          {0,1,0,0},
          {1,1,0,0} };
    Solution s;
    
    cout << s.islandPerimeter(x) << endl;
}
