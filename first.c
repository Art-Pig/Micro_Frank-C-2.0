//选择排序，最终的步数至多约N^2/2
#include <stdio.h>	//头文件
int main(void) {
	int arr[5]={ 4,2,7,1,3 };	//未排序的初始数组

	int flag;	//记住每次轮回的数组元素索引
	int temp;	//临时函数作为数组元素值的交换

	for (int j = 0; j < 5; j++) {	//依次轮回
		int min = arr[j];
		for (int i = j+1; i < 5; i++) {		//只跟后面的数组做比较

			if (arr[i] < min) {
				min = arr[i];
				flag = i;
			}
			

		}
		if (arr[j] > min) {	//判断当前所选定轮回的数组元素是否为最小，如果不是最小那么两数组元素做交换
			temp = arr[j];
			arr[j] = min;
			arr[flag] = temp;

		}
		
		

	}
	for (int n = 0; n < 5; n++) {	//依次打印出已经拍好顺序的数组

		printf("%d\t", arr[n]);
	}

	return 0;
	



}
