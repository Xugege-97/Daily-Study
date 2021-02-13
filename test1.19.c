#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//在有序数组中查找一个数字k
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)计算的是数组的总大小，单位是字节-40  sizeof（arr[0])计算的是第一个数组的大小-4
	scanf("%d", &k);
	//二分查找
	int left = 0;
	int  right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;//若是这两个数太大，会溢出
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:> %d\n", mid);
			break;
		}
	
	}
	if (left>right)
	{
		printf("对不起，找不到");
	}
	return 0;
}

两个数求平均值的写法
int main()
{
	int a = 10;
	int b = 24;
	int c = a + (b - a) / 2;//保证不会产生溢出
	printf("%d", c);
	return 0;
}



多个字符移动向中间汇聚，像流水灯的感觉
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "#################";
	//求出字符串长度很重要
	/* char buf[]="bit"
	      [b i t \0]
	下标   0 1 2  3  
	1. sizeof（buf)/sizeof（buf[0])-2;  有个\0要多出来，要多减1
	2. strlen(buf)-1;  长度-1就是最后一个的下标                     */
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//单位是毫秒  需要头文件<windows.h>
		system("cls");//执行系统命令 清屏 需要头文件<stdlib.h>
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}


模拟登录界面，只能登录三次，成功就登录，失败就退出
int main()
{
	int i = 0;
	char password[10] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);//字符串就是地址了，所以不用 &符号了    字符串输入用%s,而不是用%d
		//两个字符串的比较不能用 == ，应该使用strcmp函数
		if (strcmp( password,"123456") == 0)//假设密码是 123456
		{
			printf("密码正确，登录成功\n");
				break;
		}
		else
		{
			printf("密码错误\n");
		}
	}

	if (i == 3)
	{
		printf("三次密码错误，退出登录\n");
	}
	return 0;
}


#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	float C, S;
	scanf("%f %f %f", &a, &b, &c);
	C = a + b + c; //周长
	float p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c)); //面积
	printf("circumference= %.2f  area= %.2f", C, S);
	return 0;
}


猜数字游戏
/*   1.先生成一个随机数
     2.每次玩反馈一次，之道猜中为止   */
#include<stdlib.h>
#include<time.h>

void mesu()
{
	printf("********************\n");
	printf("***    1.play    ***\n");
	printf("***    0.exit    ***\n");
	printf("********************\n");
}
void game()
{
	int ret=rand()%100+1;//用来生成随机数  %100 表示范围是0~99，+1.范围就是1~100
	//printf("%d\n",ret);
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
        else
        {
			printf("恭喜你猜对了\n");
			break;
        }

	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//整个工程设置一次就好了
	do 
	{
		mesu();
		printf("请选择(0/1):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择:>\n");
		}
	} while (input);
	return 0;
}



/*   goto 语句：跳转出去
适用于有多个for循环嵌套的场景
*/
关机程序
#include<stdlib.h>
int main()
{
	char input[20] = "";
	system("shutdown -s -t 60");//调用系统的关机程序

again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我爱你，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我爱你") == 0)
	{
		system("shutdown -a");
	}
	else
    {
		goto again;
	}
	return 0;
}

#include<stdlib.h>
int main()
{
	char input[20] = "";
	system("shutdown -s -t 60");//调用系统的关机程序
	while (1)
	{
		printf("请注意，你的电脑将在1分钟内关机，如果输入：我爱你，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我爱你") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);//输入三个数
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}               //a里面放最大的数
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}                //a里面放最大的
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}                //c里面是最小的
	printf("%d %d %d\n",a, b, c);//a里面放最大的，c里面放最小的
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	return 0;
}


int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	辗转相除法  求最大公约数
    最小公倍数的公式是   a*b/最大公约数
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}