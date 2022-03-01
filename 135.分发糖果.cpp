/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */

// @lc code=start
class Solution {
public:
    int candy(vector<int>& ratings) {
        int count = 0;
        vector<int> v1(ratings.size());
        for(int i = 0;i < v1.size();i++)
            v1[i] = 1;
        for(int i = 0;i < ratings.size() - 1;i++)
        {
            if(ratings[i] < ratings[i + 1])      //�������ҽ��б������õ��������ҵ����Ž�
            {
                v1[i + 1] = v1[i] + 1;     //���ﲻ�ܹ�ʹ�øı�i��Ӧ�ǹ���ֵ���������ģ����ĳЩ����          
            } 
        }
        for(int i = ratings.size() - 1;i > 0;i--)
        {
            if(ratings[i] < ratings[i - 1])    //����������б������õ�����������Ž�--�������Ž�
            {
                v1[i - 1] = max(v1[i] + 1,v1[i - 1]);
            }
        }
        for(int i = 0;i < v1.size();i++)
            count = count + v1[i];     //����������ĺͣ�
        return count;
    }
};

