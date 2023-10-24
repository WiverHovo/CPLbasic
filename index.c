/*
	一个C程序就是由若干头文件和函数组成
	main是主函数，c语言中的唯一入口 
*/

//预处理命令，引入标准库函数的函数原型
#include <stdio.h>
#include <string.h>
#include <math.h>

//声明函数
int tonext();
 
/*
	标识符可以是字母（严格区分大小写）、数字（不能作为开头）、下划线_组成的字符串，不能是C语言的关键字。
*/

int main(){
	printf("Hello world!");
	tonext();
	
	return 0;
}

int tonext(){
  printf("\n");
}
//你已经学会输出Hello world了，帮我写一个操作系统吧！
