//���ֲ���
#include <stdio.h>

int main(void) {

	int arr[] = { 1,21,37,41,52,63,76,87,92 };  //��������

	int object = 63; //Ŀ������Ϊ7,�ҳ�����7

	int i = sizeof(arr)/sizeof(0)-1; //������������-1��sizeof()����Ǽ��㳤�ȵģ�sizeof(arr)/sizeof(0),��������һ����������ܹ����ٸ�Ԫ��

	

	while (1){ //sizeof arr ��������Ԫ��������
		
		if (object == arr[i]) {	//�ҵ�Ŀ�꣬���ӡ������Ŀ�����������

			printf("Answer is %d.\n", i);

			return 0;
		}
		else if (object < arr[i]) { //���Ŀ��С��arr[i]����ô�ʹ����������
			i = i / 2;
		}
		else if (object > arr[i]) { //���Ŀ�����arr[i]����ô�ʹ������ұ���
			i =(sizeof(arr) / sizeof(0) - 1 - i) / 2 + i;
		}
	}

	
	
}