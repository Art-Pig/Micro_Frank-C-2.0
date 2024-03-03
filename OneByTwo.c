//二分查找
#include <stdio.h>

int main(void) {

	int arr[] = { 1,21,37,41,52,63,76,87,92 };  //正序数组

	int object = 63; //目标数字为7,找出数字7

	int i = sizeof(arr)/sizeof(0)-1; //按着索引来得-1，sizeof()这个是计算长度的，sizeof(arr)/sizeof(0),整个除以一个，能算出总共多少个元素

	

	while (1){ //sizeof arr 计算数组元素数量，
		
		if (object == arr[i]) {	//找到目标，则打印出来与目标相符的索引

			printf("Answer is %d.\n", i);

			return 0;
		}
		else if (object < arr[i]) { //如果目标小于arr[i]，那么就从数组左边找
			i = i / 2;
		}
		else if (object > arr[i]) { //如果目标大于arr[i]，那么就从数组右边找
			i =(sizeof(arr) / sizeof(0) - 1 - i) / 2 + i;
		}
	}

	
	
}