

#include <stdio.h>	//ͷ�ļ�
void insert_arrange(int arr[5]);
void option_arrange(int arr[5]);
int main(void) {
	int arr[5] = { 4,2,7,1,3 };	//δ�ź��������
	insert_arrange(arr);
	option_arrange(arr);
	return 0;
}
//��������

void insert_arrange(int arr[5]) {	//������

	

	int temp;	//��ʱ����δ����Ԫ�ؽ�������

	for (int j = 0; j < 5; j++) {	//��ѭ��

		for (int i = 1; i < 5; i++) {	//��ѭ�����Եڶ���Ԫ����������ߵ�Ԫ�����Ƚ�

			temp = arr[i];	//��¼�Ƚ�Ԫ�ص�ֵ

			if (arr[i] < arr[i - 1]) {	//��Ԫ�����Ƚϣ����ұߵĸ�����������

				arr[i] = arr[i - 1];

				arr[i - 1] = temp;
			}
		}
	}

	printf("��������\n");

	for (int i = 0; i < 5; i++) {	//���δ�ӡ���ź��������

		printf("%d\t", arr[i]);

	}

	printf("\n");
}

//ѡ���������յĲ�������ԼN^2/2
void option_arrange(int arr[5]) {
		//δ����ĳ�ʼ����

	int flag;	//��סÿ���ֻص�����Ԫ������
	int temp;	//��ʱ������Ϊ����Ԫ��ֵ�Ľ���

	for (int j = 0; j < 5; j++) {	//�����ֻ�
		int min = arr[j];
		for (int i = j + 1; i < 5; i++) {		//ֻ��������������Ƚ�

			if (arr[i] < min) {
				min = arr[i];
				flag = i;
			}


		}
		if (arr[j] > min) {	//�жϵ�ǰ��ѡ���ֻص�����Ԫ���Ƿ�Ϊ��С�����������С��ô������Ԫ��������
			temp = arr[j];
			arr[j] = min;
			arr[flag] = temp;

		}

	}
	printf("ѡ������\n");
	for (int n = 0; n < 5; n++) {	//���δ�ӡ���Ѿ��ĺ�˳�������

		printf("%d\t", arr[n]);
	}

	printf("\n");

}


