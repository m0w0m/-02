#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, c;
	printf("請輸入你的出生年月日:");
	scanf("%d年", &a);
	scanf("%d月", &b);
	scanf("%d日", &c);
	printf("你的出生年月日是:%d年%d月%d日",a,b,c);
	system("pause");
	return 0;

}
