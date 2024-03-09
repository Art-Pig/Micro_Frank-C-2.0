# Micro_Frank-C-2.0

B站UP主Micro_Frank C语言 2.0课程笔记

P1 第一个程序，

#include <stdio.h>

int main(void){

//include 包含， stdio :标准的输出头文件；.h 文件格式，.h:是C语言特有的文件形式

  printf("Hello Word!\n");
  
//printf,是包含在stdio.h这个文件里面的，没有这个标准的头文件，那么printf这个输出语句就不能用

  return 0;
  
}

P2 C语言执行过程

int main(void){

......

}
int Apple(void){

}

int banana(void){

}

这个就是主函数，{}内的叫函数体，主函数内从上到下依次执行；

在函数外的任何语句都不执行,像Apple()、banana()啥的，在主函数外的都不执行；

每一个C语言程序只有一个main函数，每一个C语言包（可能有多个C语言程序）也只能有一个main；

一个字节有8位bit,byte

char 一个字节

int 4/2个字节



unsigned char -128~127

(-2^7-1)~(2^7-1)

整数溢出很可能会导致软件崩溃

long（在64位，占8个字节；在32位占4个字节） ,long long （在64位还是8个字节）与CPU架构的那些事，long 占4个字节，

cpu架构 位数越大处理能力乐器，最早8位，现在电脑基本上都是64位，32位也叫x86（为纪念第一款32位CPU，Intel 8086），

size 与 sizeof的使用

printf("%zu",sizeof(int));

%zu ,sizeof 看它多少个字节，u是unsigned，编译时数多少字节，（不同位数的电脑结果不同）

在微软里无论什么架构（long都是4位，long long是8位）

负的类型，_int ,_short,只能在微软用

数据类型标准写法：使用微软标准头文件，int64_t myInt64=2734729850207LL; LL64位long long 类型






