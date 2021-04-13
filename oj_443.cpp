/*************************************************************************
	> File Name: oj_443.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Mar 2021 11:21:17 PM CST
 ************************************************************************/
#include <iostream>  
#include <vector>  //头文件#include<vector>.
using namespace std;  //vector是一个能够存放任意类型的动态数组，能够增加和压缩数据。
  
int main()  
{  
    int L = 0, M = 0;  
    cin >> L >> M;  
    vector<int> sample(L+1);  //创建vector对象，vector<int> vec;
    for (int i = 0; i < L+1; i++)  
    {  
        sample[i] = 1;  
    }  
    for (int i = 0; i < M; i++)  
    {  
        int start = 0, end = 0;  
        cin >> start >> end;  
        for (int j = start; j <= end; j++)  
        {  
            sample[j] = 0;  //把区域内的树标记为0
        }  
    }  
    int num = 0;  
    for (int i = 0; i < L+1; i++)  
    {  
        num += sample[i];  //标记为1的数组单位就是剩下的树
    }  
    cout << num << endl;  
    return 0;  
}

