#include <iostream>

int main(void) {

	int sun_flowers = 50; //声明且定义

	int &real = sun_flowers; //引用，左右地址值相同，赋值的话地址会不同

	int *ptr = 0;  //指针

	ptr = &sun_flowers; //&取地址

	std:: cout<< "1: " << *ptr << std::endl; //sun_flowers的值

	std:: cout<< "2: " << ptr << std::endl; //sun_flowers的地址

	return 0;

}
