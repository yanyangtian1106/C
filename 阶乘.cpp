#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	   int m,n;
	float resm,resn;
	float fact(int k);
	scanf("%d%d", &m, &n);
	resm=fact(m);
	resn=fact(n);
	printf("%f,%f\n",resm,resn);
}

	float fact(int k)                               //引入外部函数
	{
		int I;
		float   y=1;
		for(I=2; I<=k;I++)
		y=y*I;
		return y;
		
	}