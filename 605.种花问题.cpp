/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int num = 0;
        if(flowerbed.size() == 1 && flowerbed[0] == 0)
            num = 1;
        int flag = 0;
        int end = flowerbed.size() - 1;
        for (int i = 0; i < end; i++)
        {
            if(flowerbed[i] == 0){
                if(i == 0 && flowerbed[i+1] == 0){
                    num++;
                    flowerbed[i] = 1;
                }
                if (i != 0 && (i+1) != end && flowerbed[i]== 0)
                {
                    if (flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
                    {
                        num ++;
                        flowerbed[i] = 1;
                    } 
                }
                if ((i+1)==end && flowerbed[i]==0)
                {
                    if(flowerbed[i+1] == 0){
                        num++;
                        flowerbed[i] =1;
                    }
                }
                
            }
            
        }
        if(num >= n)
            return true;
        else
            return false;
    }
};
// @lc code=end

