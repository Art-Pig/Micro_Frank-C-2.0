#include <stdio.h>



int main(void) {

	//_________________________*******ָ��**********____________________________________

	int flower = 50;

	int* ptr_1 = &flower;

	int** ptr_2 = &ptr_1; //ָ��ָ���ָ�룻

	printf("flower address:%p\n", ptr_1); //ptr_1 �ǵ�ַ ,���ͷ�����%p;
	printf("flower address:%p\n", &flower); //ptr_1 �ǵ�ַ ,&��ȡ��ַ��;
	printf("flower vlaue:%d\n", *ptr_1); //*ptr_1 ��ֵ;

	printf("ptr2 address:%p\n", ptr_2); //ptr_2 �ĵ�ַ ,���ͷ�����%p;
	printf("ptr1 address:%p\n", *ptr_2); //ptr_1 �ĵ�ַ ;
	printf("flower vlaue:%d\n", **ptr_2); //flower ��ֵ;

	//_________________________********ָ������*********____________________________________



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

	//_________________________********ð������*********____________________________________


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
				min = arr_0[j];   //��ʱ����Ϊ����ÿ�����任�ı�����
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


	//_________________________********�궨��*********____________________________________

#define MAX(x,y) ((x)>(y)?(x):(y))

	MAX(1, 2);

	printf("\nMAX:%d\n",MAX(1, 2));


#define MIN(x,y) ((x)<(y)?(x):(y))

	MIN(3, 4);

	printf("Min:%d",MIN(3, 4));

	return 0;



}