#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

�ؼ���
typedef unsigned uint  //���ǰ�ԭ����������������
int main()
{
	unsigned int num = 0;
	uint num2 = 0;
	return 0;
}


void test()
{
	 static int a = 1;//static���ξֲ�����
	                  //�ı���a���������ڣ�����a����������û�иı�
	a++;              //�൱��a=1ֻ������һ�Σ��ڶ�������ʱ��a�Ͳ��ٴ����ˣ������2
	printf("%d ", a); //static���ε�ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�ʹ�ã�����Դ�ļ������޷����ӵ�
}                   //static���εĺ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
int main()
{
	int i = 0;
	while (i<10)
	{
		test();
		i++;
	}
	return 0;  //����� 2��11
}


//extern �����������ⲿ��ʶ����
extern int g_val;
int main()
{
	int a = 10;
	printf("%d ", g_val);
	return 0;
}


int main()
{
	register int a = 0;  //register������Լ������ı����洢���Ĵ�����ȥ
	return 0;            //���Ա�register���εı����ǲ��ܽ���ȡ��ַ������

}


#define MAX 100   //define ����ı����ͺ�
#define str "hello bit"
#define MAX(x,y) ((x)>(y)?(x):(y))  //��Ŀ������
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


ָ�������ʶ
int main()
{
	int a = 10;
	int b = 0;

	printf("%p\n", &a);//%p ���յ�ַ�ĸ�ʽ��ӡ
	printf("%p\n", &b);//%p ���յ�ַ�ĸ�ʽ��ӡ

	int *pa = &a;//pa��ר��������ַ�� -��pa����ָ�����
	             //*˵��pa��ָ�����
	             //int ˵��paָ��������ͱ���
	char* pc = &b;

	*pa = 20;// * �ǽ����ò���  ������
	return 0;

}


int main()
{
	
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	//32λƽ̨-4���ֽ�
	//34λƷ̨-8���ֽ�

	return 0;
}

�ṹ�������ʶ
struct Stu
{
	����ѧ��������
	char name[10];//����-�ַ���-�ַ�����
	short age;   //����-short
	char sex[3]; //�Ա�-�ַ���
};      //��һ���Ǵ�������
      
int main()
{   //�ṹ�崴���ͳ�ʼ��
	struct Stu S1 = { "����", 22, "��" };//S1�Ƕ���
	struct Stu S2 = { "����", 30, "Ů" };
	printf("%s %d %s\n", S1.name, S1.age, S1.sex);//�ṹ��Ա���ʲ�����   �ṹ�����.�ṹ���Ա
	printf("%s %d %s\n", S2.name, S2.age, S2.sex);//�ṹ��Ա���ʲ�����   �ṹ�����.�ṹ���Ա

	struct Stu *ps= &S1;
	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);//1
	printf("%s %d %s\n", ps->name, ps->age, ps->sex);//2   ->�ṹ���Ա���ʲ�����   �ṹ��ָ��->�ṹ���Ա
	        ps->name��ͨ��ps�ҵ���ָ��Ķ����Աname
	return 0;
}

0      ����0
��0��    �ַ�0      ASCIIֵ��48
'\0'   ֵ����0  ������0��������ͬ��
NULL   ��ָ��    0