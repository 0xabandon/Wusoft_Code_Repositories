#include <stdio.h>
void calculateStats(int arr[], int size) 
{
	int sum = 0;
	int max = arr[0];
	int min = arr[0];
	
	for (int i = 0; i < size; i++) 
	{
		sum += arr[i];
		if (arr[i] > max) 
		{
			max = arr[i];
		}
		if (arr[i] < min) 
		{
			min = arr[i];
		}
	}
	
	float average = (float)sum / size;
	
	printf("平均值: %.2f\n", average);
	printf("最大值: %d\n", max);
	printf("最小值: %d\n", min);
}

int main() 
{
	int arrays[10][5] = 
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25},
		{26, 27, 28, 29, 30},
		{31, 32, 33, 34, 35},
		{36, 37, 38, 39, 40},
		{41, 42, 43, 44, 45},
		{46, 47, 48, 49, 50}
	};
	
	for (int i = 0; i < 10; i++) 
	{
		printf("数组%d:\n", i + 1);
		calculateStats(arrays[i], 5);
		printf("\n");
	}
	
	return 0;
}
