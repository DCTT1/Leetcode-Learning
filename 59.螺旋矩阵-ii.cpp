/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 铻烘棆鐭╅樀 II
 */

// @lc code=start
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int startx = 0,starty = 0;
        int loop = n/2;
        int mid = n/2;
        int count = 1;      //给矩阵里面每一个赋值
        int offset = 1;
        int i,j;
        while(loop --) {
            i = startx;
            j = starty;

            for(j = starty; j< starty + n - offset; j++)
                res[startx][j] = count ++;
            for(i = startx; i< startx + n - offset; i++)
                res[i][j] = count ++;
            for(; j>starty; j--)
                res[i][j] = count ++;
            for(; i > startx; i--)
                res[i][j] = count ++;

            startx ++;
            starty ++;

            offset += 2;

            if(n % 2 )
                res[mid][mid] = count;
        }
        return res;
    }
};
// @lc code=end

