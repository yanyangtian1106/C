#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	for(a=0;a<=100;a++)
	{
		if(1==a%2)
		{
			printf("%d\n",a);
		}
	}
}