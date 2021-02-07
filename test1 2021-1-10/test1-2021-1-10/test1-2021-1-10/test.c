#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>//.h就是一个头文件
                      std-标准 i-input输入 o-output输出
int main()
{
	printf("hello world\n");// printf 是一个打印函数  \n表示为换行
		                         它是一个库函数，所以使用的时候要引入头文件 
	return 0;
}


#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a); //“%d” 表示要输入的值是int型，
	                 //&-取地址符号 
	                 //即：把输入的值 放在 地址为a的空间
	printf("%d\n", a);//打印一个数值，打印谁呢？打印a
	return 0;
}

int main(void)  //这里的void就是明确表示main函数不需要参数
{
	return 0;
}



#include <stdio.h>
int main()
{                //sizeof 是C语言的一个操作符
	             //sizeof 计算的是后面括号里对于类型的变量所占内存的大小
	printf("%d\n",sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}

#include <stdio.h>
int a = 111;//全局变量-放在大口号外部
int main()
{   
    int a = 10;//局部变量-放在大括号里面
	                  
	printf("%d\n", a); //局部变量和全局变量名字冲突的时候，局部优先
	return 0;
}




#include <stdio.h>   
int main()           //三数相加
{   int a;
    int b;
	int c;
	scanf("%d+%d+%d", &a, &b, &c);
	int sum;
	sum = a + b + c;
	printf("%d\n", sum);
	return 0;
}




#include <stdio.h>   
  extern year;   //extern是声明外部标识符的
int main()
{
	int a = 100;
	printf("%d\n", year);
	return 0;
}

#include <stdio.h> 
int main()
{
	const int a = 20;//变量
	printf("%d\n", a);

	a = 10;//改变a的值
	printf("%d\n", a);
	                   //程序跑不了，const修饰了int，所以a就是常量，称为常变量
	return 0;
}




#include <stdio.h> 
#define max 200 //定义一个常量  名叫max  它的值为200
int main()
{
	printf("%d\n", max);

	// max = 100; 想改变它的值，但是改变不了，说明是常量
	// printf("%d\n", max);

	return 0;
}





#include <stdio.h>
enum sex   //性别
{
	male=9,   //男
	female, //女
	secret  //保密
};

int main()
{
	//enum sex zhangsan = male

	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}