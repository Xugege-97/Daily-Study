#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>

//函数的嵌套调用
void newline()
{
	printf("hehe\n");
}
void threeline()
{
	int i = 3;
	for (i = 0; i < 3; i++)
	{
		newline();
	}
}
int main()
{
	threeline();
	return;
}

//函数的链式访问
int main()
{   /*
	int len = strlen("abcdef");
	printf("%d\n", len);
	*/
	//把一个函数(strlen)的返回值 做为 另一个函数（printf）的参数
	printf("%d", strlen("abcdef"));
	return 0;
}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	return 0;
}


//函数的声明与定义
//教科书上的

int Add(int x, int y);  /*函数的声明*/
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
/*函数的定义*/
int Add(int x, int y)
{
	return x + y;
}

//平时自己写的
int Add(int x, int y) //先定义了在使用就不会发出警告了
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//将来公司开发时候写的
#include"add.h"  //这是函数的声明，注意要用 “”，而不是 <>
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}



//函数递归的思想
int main()    //最简单的递归
{
	printf("hehe\n");
	main();
	return 0;
}

void print(int n)
{
	if (n > 9) //1.递归限制条件  2.递归后无限接近这个条件
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
//函数方法，不创建临时变量，求字符串长度
           /*一般的常规写法(计数器的方式)*/
int my_strlen(char* n)//字符串，是首元素地址，所以用char*
{
	int cont = 0;       //但是这里 创建了临时变量了
	while (*n != '\0')
	{
		cont++;
		n++;
	}
	return cont;
}
int main()
{
	char arr[] = "abcdef";
	int len =my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
           /*递归的思想*/
  /*   my_strlen("abc")
       1+my_strlen("bc")
       1+1+my_strlen("c")
       1+1+1+my_strlen("")
       1+1+1+0                 跳出 */
int my_strlen(char* n)           
{      
	if (*n != '\0')
		return 1 + my_strlen(n + 1);//n+1 表示地址加1
    else
	    return 0;
}
int main()                       
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}  


//递归与迭代
           /*求n的阶乘*/
int Fac(n)
{
	if (n <= 1)
		return 1;   //利用数学公式写的
	else
		return n*Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int len = Fac(n);
	printf("%d\n", len);
	return 0;
}

/*求第n个斐波那契数*/ //后面一个数=前两个数之和
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return  Fib(n - 1) + Fib(n - 2);
}
int main()           //n<=2, 1
{                    //n>=2,n=Fib(n-1)+Fib(n-2)
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}             
/*上面这个方法效率太低，看下面这种*/  //迭代的方式
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		      /* 1 1 2 3 5 8 13
						   a b c   c的值为a+b
						     a b c   a的值是上一次的b的, b的值是上一次的c的  
							   a b c     ·····   */ 
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()           
{    
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}





//数组
int main()
{
	int arr[10] = { 1 };//不完全初始化
	char ch[5 + 5] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
	int arr2[] = { 0 };//[]中不指定元素个数，会自动根据后面初始化的内容确定其中元素的个数
	//数组也可以放字符
	int arr3[10] = { '1', 'b', 'i', 't' };//数组大小是10   ‘1’是字符1，而不是数字1
	int ch2[] = { "abc" };//数组大小是4，还有一个 \0 哦
	
	char ch[] = "bit";
	char ch4[] = { 'b', 'i', 't', '\0' };// \0是字符串的结束标志
	printf("%s\n", ch);
	printf("%s\n", ch4);

	return 0;
}

//数组的访问
int main()
{
	char arr[] = { 'b', 'i', 't' };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}

//一维数组在内存的存储
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));//使用指针p来访问数组
	}                           //只因为数组在内存中是连续存放的
	

	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p<=====>%p\n", i,&arr[i],p+i);//%p是打印地址
	            //p+i是数组arr中下标为i元素的地址
	}
	return 0;
}