#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d; 
    scanf("%1d%1d%1d%1d", &a, &b, &c, &d);                              //反向输出.
    printf("%d%d%d%d", d, c, b, a);
    return 0;
}

//#include <stdio.h>
//int main()
//{
//	int ch;
//	int ret;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s",password);            //scanf给数组赋值时不用&
//	while ((ch = getchar()) != '\n');//scanf输入时输入的数字会在缓冲区域保存，输入的数字被scanf取走，
//	                                 //但是会剩下一个回车（\n）用一个while循环的getchar来取走缓冲区中的东西，
//	                                 //直到取走最后的\n使下一个getchar不受影响
//	{
//		;
//	}
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);                             //键盘输入ctrl+z时getchar会获取到字符EOF
//	}                                            //EOF的本质是end of file（文件结束标志）值为-1
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
//	case 4:                                                 //switch语句用法
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;                                                    //最后一个语句最好也加上break；
//	default:                                                    //默认
//		printf("输入错误\n");
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
//    scanf("%c",&a);                                               //数字转ASCLL码值
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
//     printf("year=%d\nmonth=%02d\ndate=%d\n",a,b,c);                       //scanf域宽使用printf域宽使用
//	 return 0;
//}






//#include <stdio.h>
//struct book
//{
//	char name[20];
//	int prise;
//};                                                                //struct结构体类型使用
//
//int main()
//{
//	struct book a1={"C语言程序设计",55};
//	printf("书名：%s\n",a1.name);
//	printf("价格:%d元\n",a1.prise);
//	a1.prise=15;
//	strcpy(a1.name,"C++");                                         //字符串的赋值形式：strcpy的使用
//	printf("修改后的价格：%d\n",a1.prise);
//	struct book* c=&a1;                                            //struct中指针变量的使用
//	printf("书名：%s\n",(*c).name);
//	printf("价格：%d\n",(*c).prise);
//	printf("书名：%s\n",c->name);
//	printf("价格:%d\n",c->prise);                                     //指针变量的简单使用方法"->"
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a=10;
//	int* b=&a;
//	*b=20;                                           //储蓄地址与解引用操作符（间接访问操作符）的使用
//	printf("%d\n",a);
//
//}




//#include <stdio.h>
//int main()
//{
//	int a=10;
//	printf("%p",&a);                                         //打印地址
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//  char arr[]={73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};
//    int a=sizeof(arr)/sizeof(arr[0]);
//    int b;
//    for(b=0;b<a;b++)                                                       //打印ASCLL码值
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
//		for(d=0;d<b;d++)                                      //for循环的嵌套使用
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
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",a,b,c,d);                 //保留小数后几位
//    return 0;
//
//}

//}
//int main()
//{
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<=100&b<=100&c<=100&0<=a&0<=b&0<=c)                   //“if语句”中“&”的使用
//	{
//		printf("数学=%d 语文=%d 英语=%d\n",a,b,c);
//	}	
//	else
//		printf("错误\n");
//	
//	return 0;
//	
//}

//int main()
//{
//	int i=0;
//	int test();
//	while (i<5)                                    //while循环
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
//    scanf("%d%d%d",&a,&b,&c);                          //scanf的使用 
//    printf("score1=%d,score2=%d,score3=%d",a,b,c);
//return 0;
//



//	int mum1=10;
//	int mum2=20;
//	int MAX(int x, int y);                         //使用的外部函数放在后面main（）中需要引入函数名
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
//｝
//
//#include <stdio.h>
//int main()
//{
//
//
//
//	    int a=0XABCDEF;
//    printf("%15d",a);                              //域宽
//    return 0;
 //printf("%#o %#X", 1234, 1234);                    //使用修饰符“#”控制前导显示,是控制显示，不是#0或者#0X return 0; }
	///*printf("%x\n",a);*/


	/* printf("the size of short is?\nbytes:%d\n",sizeof(short));
// printf("the size of int is?\nbytes:%d\n",sizeof(int));*/

//int main()
//
//{
//	int arr[10]={0};
//	printf("%d\n",sizeof(arr));                        //sizeof与strlen的区别
		 /*printf("%d\n",strlen(arr));*/
//}
//
//
//
//
//	//char arr1[]="abc";
//	//char arr2[]={'a','b','c','\0'};
//	//printf("%d\n",strlen(arr1));                       //字符和字符串
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
//	float fact(int k)                               //引入外部函数
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
