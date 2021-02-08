#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

关键字
typedef unsigned uint  //就是把原来的类型重新命名
int main()
{
	unsigned int num = 0;
	uint num2 = 0;
	return 0;
}


void test()
{
	 static int a = 1;//static修饰局部变量
	                  //改变了a的生命周期，但是a的作用域还是没有改变
	a++;              //相当于a=1只创建了一次，第二次来的时候，a就不再创建了，变成了2
	printf("%d ", a); //static修饰的全局变量只能在自己所在的源文件使用，出来源文件，就无法连接到
}                   //static修饰的函数只能在自己所在的源文件内部使用
int main()
{
	int i = 0;
	while (i<10)
	{
		test();
		i++;
	}
	return 0;  //结果是 2到11
}


//extern 是用来声明外部标识符的
extern int g_val;
int main()
{
	int a = 10;
	printf("%d ", g_val);
	return 0;
}


int main()
{
	register int a = 0;  //register建议吧自己创建的变量存储到寄存器中去
	return 0;            //所以被register修饰的变量是不能进行取地址操作的

}


#define MAX 100   //define 定义的变量和宏
#define str "hello bit"
#define MAX(x,y) ((x)>(y)?(x):(y))  //三目操作符
#define ADD(x,y) (x+y)
int main()
{
	int a = 300;
	int b = 20;
	int c = ADD(a,b);
	int d = MAX(a, b);
	int m = MAX;
	printf("%d\n", m);
	printf("%s\n", str)
	printf("%d\n", c);
	printf("%d\n", MAX(a,b));

	return 0;
}


指针初步认识
int main()
{
	int a = 10;
	int b = 0;

	printf("%p\n", &a);//%p 按照地址的格式打印
	printf("%p\n", &b);//%p 按照地址的格式打印

	int *pa = &a;//pa是专门用来地址的 -把pa叫做指针变量
	             //*说明pa是指针变量
	             //int 说明pa指向的是整型变量
	char* pc = &b;

	*pa = 20;// * 是解引用操作  操作符
	return 0;

}


int main()
{
	
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	//32位平台-4个字节
	//34位品台-8个字节

	return 0;
}

结构体初步认识
struct Stu
{
	描述学生的属性
	char name[10];//名字-字符串-字符数组
	short age;   //年龄-short
	char sex[3]; //性别-字符串
};      //这一步是创建类型
      
int main()
{   //结构体创建和初始化
	struct Stu S1 = { "张三", 22, "男" };//S1是对象，
	struct Stu S2 = { "李四", 30, "女" };
	printf("%s %d %s\n", S1.name, S1.age, S1.sex);//结构成员访问操作符   结构体变量.结构体成员
	printf("%s %d %s\n", S2.name, S2.age, S2.sex);//结构成员访问操作符   结构体变量.结构体成员

	struct Stu *ps= &S1;
	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);//1
	printf("%s %d %s\n", ps->name, ps->age, ps->sex);//2   ->结构体成员访问操作符   结构体指针->结构体成员
	        ps->name是通过ps找到所指向的对象成员name
	return 0;
}

0      数字0
‘0’    字符0      ASCII值是48
'\0'   值就是0  与数字0本质是相同的
NULL   空指针    0