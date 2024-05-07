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
	for (i = 0; i < n - 1; i++) //i����������ѡ������ĵ�һ��Ԫ�ص��±�
	{
		int start = i;   // ��ʼ��startΪ��ǰ�ִε���ʼλ��i
		int min = start; // ��Сֵ������ʼ��Ϊstart
		while (start < n)
		{
			// �ӵ�ǰλ��i��ʼ�����ұ���������ĩβ
			if (a[start] < a[min])
			{
				min = start; // ������ָ�С��ֵ���������Сֵ����
			}
			start++; // �ƶ�����һ��Ԫ��
		}
		Swap(&a[i], &a[min]); // �뵱ǰλ��i����Ԫ�ؽ�����ȷ����СԪ��λ������ȷ��λ��
	}
}

void SelectSort(int* a, int n)
{
    int left = 0;      // leftָ�룬ָ��ǰδ���򲿷ֵĿ�ʼ
    int right = n - 1; // rightָ�룬ָ��ǰδ���򲿷ֵĽ���
    while (left < right) // ����ָ��С����ָ��ʱ����������
    {
        int minIndex = left;  // ��ʼ����Сֵ����Ϊ��ǰ��߽�
        int maxIndex = left;  // ��ʼ�����ֵ����Ϊ��ǰ��߽�
        int i = 0;
        // ������ǰδ����Ĳ��֣���left��right
        for (i = left; i <= right; i++)
        {
            if (a[i] < a[minIndex]) // �����ǰԪ��С����֪����Сֵ
                minIndex = i;       // ������Сֵ����
            if (a[i] > a[maxIndex]) // �����ǰԪ�ش�����֪�����ֵ
                maxIndex = i;       // �������ֵ����
        }
        // ������Сֵ����ǰδ���򲿷ֵĿ�ʼλ��
        Swap(&a[minIndex], &a[left]);
        // ������ֵ����Сֵ�ĳ�ʼλ�ã��������ֵ����
        if (left == maxIndex)
        {
            maxIndex = minIndex; // ��Ϊ��Сֵ�Ѿ���������leftλ��
        }
        // �������ֵ����ǰδ���򲿷ֵĽ���λ��
        Swap(&a[maxIndex], &a[right]);
        // ��Сδ����ķ�Χ
        left++;   // �ƶ���߽�����
        right--;  // �ƶ��ұ߽�����
    }
}