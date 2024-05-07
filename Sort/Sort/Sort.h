#pragma once

#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void SelectSort(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++) //i代表参与该趟选择排序的第一个元素的下标
	{
		int start = i;   // 初始化start为当前轮次的起始位置i
		int min = start; // 最小值索引初始化为start
		while (start < n)
		{
			// 从当前位置i开始，向右遍历至数组末尾
			if (a[start] < a[min])
			{
				min = start; // 如果发现更小的值，则更新最小值索引
			}
			start++; // 移动到下一个元素
		}
		Swap(&a[i], &a[min]); // 与当前位置i处的元素交换，确保最小元素位于其正确的位置
	}
}

void SelectSort(int* a, int n)
{
    int left = 0;      // left指针，指向当前未排序部分的开始
    int right = n - 1; // right指针，指向当前未排序部分的结束
    while (left < right) // 当左指针小于右指针时，继续排序
    {
        int minIndex = left;  // 初始化最小值索引为当前左边界
        int maxIndex = left;  // 初始化最大值索引为当前左边界
        int i = 0;
        // 遍历当前未排序的部分，从left到right
        for (i = left; i <= right; i++)
        {
            if (a[i] < a[minIndex]) // 如果当前元素小于已知的最小值
                minIndex = i;       // 更新最小值索引
            if (a[i] > a[maxIndex]) // 如果当前元素大于已知的最大值
                maxIndex = i;       // 更新最大值索引
        }
        // 交换最小值到当前未排序部分的开始位置
        Swap(&a[minIndex], &a[left]);
        // 如果最大值在最小值的初始位置，更新最大值索引
        if (left == maxIndex)
        {
            maxIndex = minIndex; // 因为最小值已经被交换到left位置
        }
        // 交换最大值到当前未排序部分的结束位置
        Swap(&a[maxIndex], &a[right]);
        // 缩小未排序的范围
        left++;   // 移动左边界向右
        right--;  // 移动右边界向左
    }
}