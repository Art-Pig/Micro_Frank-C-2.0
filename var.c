#include <stdio.h>



int main(void) {

	//_________________________*******指针**********____________________________________

	int flower = 50;

	int* ptr_1 = &flower;

	int** ptr_2 = &ptr_1; //指向指针的指针；

	printf("flower address:%p\n", ptr_1); //ptr_1 是地址 ,类型符号是%p;
	printf("flower address:%p\n", &flower); //ptr_1 是地址 ,&是取地址符;
	printf("flower vlaue:%d\n", *ptr_1); //*ptr_1 是值;

	printf("ptr2 address:%p\n", ptr_2); //ptr_2 的地址 ,类型符号是%p;
	printf("ptr1 address:%p\n", *ptr_2); //ptr_1 的地址 ;
	printf("flower vlaue:%d\n", **ptr_2); //flower 的值;

	//_________________________********指针数组*********____________________________________



	int num[] = { 0,1,2 };

	int* ptr_3[3];

	int i;

	for(i = 0; i<3; i++)
	{
	
		ptr_3[i] = &num[i];
	
	}


	printf("ptr_3 address:");
	for (i = 0; i < 3; i++)
	{
		
		printf("%p\t", ptr_3[i]);

	}

	printf("\nptr_3 value:");
	for (i = 0; i < 3; i++)
	{

		printf("%d\t", *ptr_3[i]);

	}

	//_________________________********冒泡排序*********____________________________________


	int arr_0[] = {2,4,3,8,5,6,9,1};

	int min;

	int temp;

	int j;

	for (i = 0; i < sizeof(arr_0) / sizeof(arr_0[0]); i++)
	{
	
		min = arr_0[i];

		for (j = i+1; j < sizeof(arr_0) / sizeof(arr_0[0]); j++)
		{
		
			if (arr_0[j] < min)
			{
				min = arr_0[j];   //临时变量为储存每次所变换的变量；
				temp = arr_0[i];

				arr_0[i] = min;

				arr_0[j] = temp;

				
			}
		
		
		}
	
	
	}


	printf("\narr_0:");

	for (i = 0; i < sizeof(arr_0) / sizeof(arr_0[0]); i++)
	{
	
		printf("%d\t", arr_0[i]);
	}


	//_________________________********宏定义*********____________________________________

#define MAX(x,y) ((x)>(y)?(x):(y))

	MAX(1, 2);

	printf("\nMAX:%d\n",MAX(1, 2));


#define MIN(x,y) ((x)<(y)?(x):(y))

	MIN(3, 4);

	printf("Min:%d",MIN(3, 4));

	return 0;



}