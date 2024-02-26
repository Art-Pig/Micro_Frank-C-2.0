#include <stdio.h>
int main(void) {
	int arr[5]={ 4,2,7,1,3 };

	int flag;
	int temp;

	for (int j = 0; j < 5; j++) {
		int min = arr[j];
		for (int i = j+1; i < 5; i++) {

			if (arr[i] < min) {
				min = arr[i];
				flag = i;
			}
			

		}
		if (arr[j] > min) {
			temp = arr[j];
			arr[j] = min;
			arr[flag] = temp;

		}
		
		

	}
	for (int n = 0; n < 5; n++) {

		printf("%d\t", arr[n]);
	}

	return 0;
	



}