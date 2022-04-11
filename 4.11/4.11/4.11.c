#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*计算机存储*/
/*练习题写一个程序判断当前电脑是小端存储还是大端存储*/
int main() {
	int a = 1;
	char* p = (char*)&a;
	if (*p == a) {
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}