//ð������

#include <stdio.h>

int main(void) {

	int arr[] = { 4,2,7,1,3 }; //δ���������

	int min = 0; //����ΪҪ�ȵ���Сֵ
	int temp = 0;	//��Ϊ����Ԫ�ؽ�������ʱ����

	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++) { //ÿ�ε��ֻرȽ�

		min = arr[j];
		for (int i= j+1;i < sizeof(arr) / sizeof(arr[0]) - 1;i++) { //�����ڲ�û�Ƚ�һ�Σ��򽻻�һ��

			if (arr[i] < min) {
				min = arr[i];
				temp = arr[j];
				arr[j] = min;
				arr[i] = temp;
			}

		}

		
	}
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++) { //��ӡ���ĺ��������

		printf("%d\n", arr[j]);

	}

	return 0;
}