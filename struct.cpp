#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
struct book
{
	char name[20];
	int prise;
};                                                                //struct结构体类型使用

int main()
{
	struct book a1={"C语言程序设计",55};
	printf("书名：%s\n",a1.name);
	printf("价格:%d元\n",a1.prise);
	a1.prise=15;
	strcpy(a1.name,"C++");                                         //字符串的赋值形式：strcpy的使用
	printf("修改后的价格：%d\n",a1.prise);
	struct book* c=&a1;                                            //struct中指针变量的使用
	printf("书名：%s\n",(*c).name);
	printf("价格：%d\n",(*c).prise);
	printf("书名：%s\n",c->name);
	printf("价格:%d\n",c->prise);                                     //指针变量的简单使用方法"->"
	return 0;
}