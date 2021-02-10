#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()

{
	int a = 0;
	int b = 0;
	scanf("%d*%d", &a, &b); 
	int c = a * b ;
	printf("积为%d\n", c);
	return 0;
}



int main()
{
	    char arr1[] = { 'a', 'b', 'c' };// c的后面不知道还有啥，所以有随机值还会打印
		char arr2[] = "abc";            //字符串的末尾有一个 ‘\0’，
		printf("%s\n", arr1);
	    printf("%s\n", arr2);    //%d 是打印整形 
		                         //%s 是打印字符串
	return 0;
}


#include <stdio.h>
int main()
{
	int a = 0;
	scanf ("%d", &a);  //输入一个整数
	if (a>=140)
	{
		printf("Genius\n");
	}
	else
	{
		printf("对不起，不支持查询\n");
	}
	return 0;
}


#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= b)
		printf("较大值是：%d\n", a);
	else
		printf("较大值是：%d\n", b);
	return 0;
}


#include <string.h>
int main()
{
	char arr1[] = { "abc"};
	printf("%d\n", strlen(arr1));
	return 0;
}


int main()
{
	printf("%c\n", ' \'  ');
	printf("%c\n", " \" ");
	return 0;
}


int main()
{
	printf("%d\n", strlen("abcdf"));//  结果是6
	printf("%d\n", strlen("c:\test\328\test\test.c"));
		return 0;
}


int main()
{
		int input = 0;
		printf("假如比特学习\n");
		printf("你要好好学习吗（1 / 0） ? \n");
		scanf("%d", &input);
		if(input == 1)             //判断input是不是等于1，判断用==    语法要求
			printf("好offer\n");
		else
			printf("回家卖红薯\n");
		return 0;
}


int main()
{
	int line = 0;
	while(line < 2000)
	{
		printf("写代码 %d\n", line);
		line++;
	}
	if(line = 2000)
	{
		printf("好offer\n");
	}

		return 0;
}


int main()
{
	int arr1[10];                 // 这个是随机值
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr3[10] = { 1, 2, 3, };  //不完全创建，后面的默认是0

	printf("%d\n", arr2[4]);     // arr[4]就是访问数组下标是4的元素，就是5了

	int i = 0;
	while(i <10)
		{
		printf("%d ", arr2[i]);
		i++;
	    }

		return 0;
}


int  main()
{
	int a = 10;
	int b = a++;   //后置++，先使用，后++
	printf("%d\n", a);   //结果是10
	printf("%d\n", b);   //结果是11
	return 0;
}
int main()
{
	int a = 10;
	int b = ++a;   //前置++，先++，后使用
	printf("%d\n", b);   //结果是11
	printf("%d\n", a);
	return 0;
}

