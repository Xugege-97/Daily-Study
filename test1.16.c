#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int test()
{
	int x = 10;
	int y = 20;
	if (1)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	printf("%d\n", test());
	return 0;
}


int main()
{
	int num = 10;
	if (5 == num)   //判断5与num的值
	{
		printf("hehe\n");
	}
	return 0;
}


输出1-100之间的奇数    
方法 一
int main()
{
	int i = 0;
	while (i < 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	return 0;
}
//方法二
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
//方法三
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i+=2)//循环50次，直接在脑子里想出来奇数是1 3 5 7 9
	{                          //i+=2即为i开始是为1，i=i+1
		printf("%d ", i);
	}
	return 0;
}

switch 语句   输入数字几，输出就显示星期几
/*  switch(整形表达式)
    {
	语句项；
    }
*/

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)  //  重点：switch后面括号里是几，就直接从那一条语句进去
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}
}          
 那假如 要求变成周一到周五是工作日，周六周日是休息日呢，还这样，就很麻烦了
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)  //switch后面括号里是几，就直接从那一条语句进去
	{
	case 1:
	case 2:
	case 3:
	case 4:      //switch后面不一定要break，得看你想实现的功能
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:   //默认选项，也就是说没有符合的语句，就自动走这一条
		printf("选择错误\n");
		break;
	}
	return 0;
}



循环有三种  while  、 for、 do while
/*if语句：  if(条件)
            语句；          */
/*while语句：while（表达式）
             循环语句；     */
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;//终止循环
			continue;//continue是终止本次循环，也就是continue后面的语句不再执行，直接跳到while的判断部分，进行下一次入口判断
		printf("%d ",i);
		i++;
	}
	return 0;
}

int main()
{
	int ch = 0;
	ch = getchar();//getchar-从标准输入(键盘）中得到  一个 字符
	putchar(ch);  //打印一个字符到标准输出（屏幕）
	return 0;
}


int main()
{
	int ch = 0;
	//读取失败的时候，getchar返回eof
	while ((ch = getchar()) != eof)//按ctrl+z就可以结束了，也就是返回eof了
	{
		putchar(ch);
	}
	return 0;
}


int main()
{
	char password[10] = { 0 };
	printf("请输入密码:>");//  123456\n
	scanf("%s", password);//数组名直接就是地址了，所以不用取地址符号  拿走的是123456  
	//清理缓冲区
	int ch = 0;  //若是返回的值是EOF=-1，则char类型就存不下了，所以要用int
	while ((ch = getchar()) != '\n')
	{
		getchar();

	}
	printf("请确认(Y/N):>");
	ch=getchar(); //原来的这里还剩一个 \n 直接读取走了
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}

//输出0~9的数字
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')
			continue;
			putchar(ch);
	}
	return 0;
}



for循环
循环的  初始化、判断部分、调整部分 会影响循环的不同，所以while循环的坏处体现
for（表达式1,；表达式2；表达式3）
{          }
int main()
{
	int i = 0;
	for (i = 2; i < 11; i++)
	{
		if (i == 8)
			break;
		printf("%d ", i);
	}
	return 0;
}


for循环变种
int main()
{
	for (;;)   //3个部分都省了，表示恒为真
	{
		printf("hehe\n");
	}
	return 0;
}
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 0 && y < 5; x++, y++)
	{
		printf("hehe\n");
	}
	return 0;
}


 do while语句
/* do 
       循环语句；
   while（表达式）；*/
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i<=11);
	return 0;
}


计算阶乘
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;//初始化若是0的话，怎么乘都是0
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}


int main()
{
	int n = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++ )
	{
			ret *= n;
		    sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}


《把时间当做朋友》



在有序的数组中查找具体的某个数
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 6;//要查找的数
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);// 40/4=10  先计算一下有多少个数
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
			printf("找到了，下标识:> %d\n", i);
	}
	if (i>sz)
	{
		printf("找不到了\n");
	}
	return 0;
}             //效率太慢了

二分查找-折半查找
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if ( k < arr[mid] )
		{
			right = mid - 1;
		}                      //范围锁定在左边
		else if (k > arr[mid] )
		{
			left = mid + 1;
		}                      //范围锁定在右边
		else
		{
			printf("找到了，下标是:>%d\n", mid);    //刚好是
			break;
		}
	}
	if (left>right)
	{
		printf("对不起，找不到\n");
	}
	
	return 0;
}

          