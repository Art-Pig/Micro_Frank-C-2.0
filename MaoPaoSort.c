//冒泡排序

#include <stdio.h>

int main(void) {

	int arr[] = { 4,2,7,1,3 }; //未定义的数组

	int min = 0; //假设为要比的最小值
	int temp = 0;	//作为数组元素交换的临时变量

	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++) { //每次的轮回比较

		min = arr[j];
		for (int i= j+1;i < sizeof(arr) / sizeof(arr[0]) - 1;i++) { //数组内部没比较一次，则交换一次

			if (arr[i] < min) {
				min = arr[i];
				temp = arr[j];
				arr[j] = min;
				arr[i] = temp;
			}

		}

		
	}
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++) { //打印出拍好序的数组

		printf("%d\n", arr[j]);

	}

	return 0;
}