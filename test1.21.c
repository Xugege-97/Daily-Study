#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>

//打印闰年
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0))
		{
			printf("%d ", year);
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;
}                   


int main()
{
	int i = 0;
	for (i = 101; i <= 200; i+=2)//先排除偶数不可能是素数
	{
		int j = 0;
		int flag = 1;//假设i是素数
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//打印1~100之间含有9的数字
int main()
{
	int i = 0;
	int cont = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i / 10 == 9)
		{
			cont++;
		}
	}
	printf("%d ", cont);
	return 0;
}


int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);

/*  %f-float
    %lf-double
    %s-字符串
    %c-字符
    %d-有符号的整数
    %u-无符号的数      */

	return 0;
}

//找出输入的十个数中的最大值
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[i];
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}


//打印乘法口诀表
int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
	     //打印行
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%-2d ", i, j, k);
		}
		printf("\n");
	}
	return 0;
}

//二分查找
int main()
{
	int arr[10] = {  1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
	int k = 7;//假设这是要查找的数
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k>arr[mid])
		{
			left = mid + 1;
		}else
		{
			printf("找到了，下标是:>%d\n",mid);
			break;
		}
	}
	if (left>right)
	{
		printf("对不起，找不到。\n");
	}
	return 0;
}



//函数
int Add(int x, int y)
{
	int z = x + y;//加法计算
	return z;
}

int mian()
{
	int a = 10;
	int b = 30;
	int ret = Add(a, b);//add就是一个函数，他的输入参数是a,b   返回值是ret
	printf("%d\n", ret);
	return 0;
}


//用一个函数实现两个数的交换
void Swap(int x, int y)   //void就是不需要返回值
{
	int z = 0;
	x = y;
	y = z;      //对形参的修改，不会影响实参
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d  b=%d\n", a,b);//交换前
    //传值调用
	Swap(a, b);//实参传递给形参，形参只是实参的一份临时拷贝
	printf("交换后：a=%d  b=%d\n", a, b);//交换后
	return 0;
}         //交换不了，原因是x,y的地址  和  a,b的地址  不一样

//修改程序

void Swap(int* px, int* py)  //因为传进来的参数是地址（&a,&b）,所以这里要用 指针
{
	int z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d  b=%d\n", a, b);//交换前
   //传址调用
	Swap(&a, &b);
	printf("交换后：a=%d  b=%d\n", a, b);//交换后
	return 0;
}

//找出两个数的最大值
int max(x, y)//x,y都是形参，只有在这个函数被调用的时候才创建
{
	int z = (x > y) ? (x) : (y);
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int get = max(a, b);//把实参传递给形参
	printf("%d\n", get);
	return 0;
}


//判断一个数是否为素数
//事先约定：返回1-素数   返回0-不是素数

int is_prime(int *i)
{
	int j = 0;
	int k = *i;
	for (j = 2; j <= sqrt(k); j++)
	{
		if (k % j == 0)
		return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	switch (is_prime(&i))
	{
	   case 1:printf("是素数:> %d\n", i); break;
	   case 0:printf("不是素数\n"); break;
	}	
	return 0;
}


int is_leap_year(int y)
{
	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));

  /* if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
	     return 1;
	 else
		 return 0;   */
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
		{
			printf("%d ",year);
		}
	}
	return 0;
}


//用一个函数实现二分查找
int binary_search(int arr[], int k,int sz)
{
		int left = 0;
		int right = sz - 1; 
		while (left <= right)
		{
			int mid = left + (right-left) / 2;
			if (k < arr[mid])
			{
				right = mid - 1;
			}
			else if (k>arr[mid])
			{
				left = mid + 1;
			}else
				return mid;		
		}
		//if (left <= right)
			return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是:>%d\n", ret);
	}
	return 0;
}

//实现每调用一次Add,num的值就加1
int Add(int*p)
{
	(*p)++;    //（）很重要，要不然就变成了p++
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}