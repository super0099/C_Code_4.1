#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*������洢*/
/*��ϰ��дһ�������жϵ�ǰ������С�˴洢���Ǵ�˴洢*/
int main() {
	int a = 1;
	char* p = (char*)&a;
	if (*p == a) {
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}