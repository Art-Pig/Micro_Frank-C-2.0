/*


*C语言结构体

*C++也有

*以图书目录举例



*/


#include <stdio.h>

struct libary {

	int numbers;

	char name[100];

};  //构造一个名为libary的数据类型

int main(void) {

	struct libary little = { 2,"litlle pricine" };; //声明变量 ,为其赋值

	printf("The \"little\" Numbers is %d and the name is %s. \n", little.numbers, little.name);  //打印出它的数据

	return 0;

}
