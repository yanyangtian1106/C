#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d; 
    scanf("%1d%1d%1d%1d", &a, &b, &c, &d);                              //�������.
    printf("%d%d%d%d", d, c, b, a);
    return 0;
}

//#include <stdio.h>
//int main()
//{
//	int ch;
//	int ret;
//	char password[20] = { 0 };
//	printf("����������");
//	scanf("%s",password);            //scanf�����鸳ֵʱ����&
//	while ((ch = getchar()) != '\n');//scanf����ʱ��������ֻ��ڻ������򱣴棬��������ֱ�scanfȡ�ߣ�
//	                                 //���ǻ�ʣ��һ���س���\n����һ��whileѭ����getchar��ȡ�߻������еĶ�����
//	                                 //ֱ��ȡ������\nʹ��һ��getchar����Ӱ��
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);                             //��������ctrl+zʱgetchar���ȡ���ַ�EOF
//	}                                            //EOF�ı�����end of file���ļ�������־��ֵΪ-1
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10) 
//	{
//		if (i == 5)
//			continue;                                 //continue
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:                                                 //switch����÷�
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;                                                    //���һ��������Ҳ����break��
//	default:                                                    //Ĭ��
//		printf("�������\n");
//
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a;
//	for(a=0;a<=100;a++)
//	{
//		if(1==a%2)
//		{
//			printf("%d\n",a);
//		}
//	}
//}


//#include <stdio.h>
//int main()
//{
//    int a=40;
//    int c=212;
//    float b=0;
//    b=(-8+22)*a-10+c/2;
//    printf("%f",b);
//    return 0;
//}

//#include <stdio.h>
//    int main()
//{
//   char a;
//   
//    scanf("%c",&a);                                               //����תASCLL��ֵ
//    printf("%d",a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a;
//    int b;
//    scanf("%d,%d",&b,&a);
//    printf("%d,%d",a,b);
//    return 0;
//}
// 
//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//    scanf("%4d%2d%2d",&a,&b,&c);
//     printf("year=%d\nmonth=%02d\ndate=%d\n",a,b,c);                       //scanf���ʹ��printf���ʹ��
//	 return 0;
//}






//#include <stdio.h>
//struct book
//{
//	char name[20];
//	int prise;
//};                                                                //struct�ṹ������ʹ��
//
//int main()
//{
//	struct book a1={"C���Գ������",55};
//	printf("������%s\n",a1.name);
//	printf("�۸�:%dԪ\n",a1.prise);
//	a1.prise=15;
//	strcpy(a1.name,"C++");                                         //�ַ����ĸ�ֵ��ʽ��strcpy��ʹ��
//	printf("�޸ĺ�ļ۸�%d\n",a1.prise);
//	struct book* c=&a1;                                            //struct��ָ�������ʹ��
//	printf("������%s\n",(*c).name);
//	printf("�۸�%d\n",(*c).prise);
//	printf("������%s\n",c->name);
//	printf("�۸�:%d\n",c->prise);                                     //ָ������ļ�ʹ�÷���"->"
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a=10;
//	int* b=&a;
//	*b=20;                                           //�����ַ������ò���������ӷ��ʲ���������ʹ��
//	printf("%d\n",a);
//
//}




//#include <stdio.h>
//int main()
//{
//	int a=10;
//	printf("%p",&a);                                         //��ӡ��ַ
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//  char arr[]={73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};
//    int a=sizeof(arr)/sizeof(arr[0]);
//    int b;
//    for(b=0;b<a;b++)                                                       //��ӡASCLL��ֵ
//    {
//        printf("%c",arr[b]);
//    }
//    return 0;
//}
// 
// 
//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%c",&a);
//	int b,c,d;
//	for(b=1;b<6;b++)
//	{
//		for(c=5-b;c>0;c--)
//		{
//			printf(" ");
//		}
//		for(d=0;d<b;d++)                                      //forѭ����Ƕ��ʹ��
//		{
//			printf("%c ",a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a=0;
//    float b=0,c=0,d=0;
//    scanf("%d%f%f%f",&a,&b,&c,&d);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",a,b,c,d);                 //����С����λ
//    return 0;
//
//}

//}
//int main()
//{
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<=100&b<=100&c<=100&0<=a&0<=b&0<=c)                   //��if��䡱�С�&����ʹ��
//	{
//		printf("��ѧ=%d ����=%d Ӣ��=%d\n",a,b,c);
//	}	
//	else
//		printf("����\n");
//	
//	return 0;
//	
//}

//int main()
//{
//	int i=0;
//	int test();
//	while (i<5)                                    //whileѭ��
//	{
//		test();
//		i++;
//	}
//		return 0;
//
//}
//int test()
//{
//	static int a=1;
//	a++;
//	printf("a=%d\n",a);
//	return a;
//
//}


//int main()
//{
//	    int a,b,c;
//    scanf("%d%d%d",&a,&b,&c);                          //scanf��ʹ�� 
//    printf("score1=%d,score2=%d,score3=%d",a,b,c);
//return 0;
//



//	int mum1=10;
//	int mum2=20;
//	int MAX(int x, int y);                         //ʹ�õ��ⲿ�������ں���main��������Ҫ���뺯����
//	int max=0;
//	max=MAX(mum1,mum2);
//	printf("MAX=%d",max);
//}
//int MAX(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//��
//
//#include <stdio.h>
//int main()
//{
//
//
//
//	    int a=0XABCDEF;
//    printf("%15d",a);                              //���
//    return 0;
 //printf("%#o %#X", 1234, 1234);                    //ʹ�����η���#������ǰ����ʾ,�ǿ�����ʾ������#0����#0X return 0; }
	///*printf("%x\n",a);*/


	/* printf("the size of short is?\nbytes:%d\n",sizeof(short));
// printf("the size of int is?\nbytes:%d\n",sizeof(int));*/

//int main()
//
//{
//	int arr[10]={0};
//	printf("%d\n",sizeof(arr));                        //sizeof��strlen������
		 /*printf("%d\n",strlen(arr));*/
//}
//
//
//
//
//	//char arr1[]="abc";
//	//char arr2[]={'a','b','c','\0'};
//	//printf("%d\n",strlen(arr1));                       //�ַ����ַ���
//	//printf("%d\n",strlen(arr2));
//	//return 0;
//
//
//
//
// int main()
//{
//	char arr1[]="abc";
//	char arr2[]={'a','b','c',};
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",strlen(arr1);
//	}
//
//
//
//
//{
//	   int m,n;
//	float resm,resn;
//	float fact(int k);
//
//
//	scanf ("%d%d",&m,&n);
//	resm=fact(m);
//	resn=fact(n);
//	printf("%f,%f\n",resm,resn);
//}
//
//	float fact(int k)                               //�����ⲿ����
//	{
//		int I;
//		float   y=1;
//		for(I=2; I<=k;I++)
//		y=y*I;
//		return y;
//		
//	}
//
//
//
//#include <stdio.h>
//int main()
//{
//	printf("**********\n Welcome\n**********\n");
//}
