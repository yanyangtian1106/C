#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
struct book
{
	char name[20];
	int prise;
};                                                                //struct�ṹ������ʹ��

int main()
{
	struct book a1={"C���Գ������",55};
	printf("������%s\n",a1.name);
	printf("�۸�:%dԪ\n",a1.prise);
	a1.prise=15;
	strcpy(a1.name,"C++");                                         //�ַ����ĸ�ֵ��ʽ��strcpy��ʹ��
	printf("�޸ĺ�ļ۸�%d\n",a1.prise);
	struct book* c=&a1;                                            //struct��ָ�������ʹ��
	printf("������%s\n",(*c).name);
	printf("�۸�%d\n",(*c).prise);
	printf("������%s\n",c->name);
	printf("�۸�:%d\n",c->prise);                                     //ָ������ļ�ʹ�÷���"->"
	return 0;
}