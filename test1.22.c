#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>

//������Ƕ�׵���
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

//��������ʽ����
int main()
{   /*
	int len = strlen("abcdef");
	printf("%d\n", len);
	*/
	//��һ������(strlen)�ķ���ֵ ��Ϊ ��һ��������printf���Ĳ���
	printf("%d", strlen("abcdef"));
	return 0;
}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	return 0;
}


//�����������붨��
//�̿����ϵ�

int Add(int x, int y);  /*����������*/
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
/*�����Ķ���*/
int Add(int x, int y)
{
	return x + y;
}

//ƽʱ�Լ�д��
int Add(int x, int y) //�ȶ�������ʹ�þͲ��ᷢ��������
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

//������˾����ʱ��д��
#include"add.h"  //���Ǻ�����������ע��Ҫ�� ������������ <>
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}



//�����ݹ��˼��
int main()    //��򵥵ĵݹ�
{
	printf("hehe\n");
	main();
	return 0;
}

void print(int n)
{
	if (n > 9) //1.�ݹ���������  2.�ݹ�����޽ӽ��������
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
//������������������ʱ���������ַ�������
           /*һ��ĳ���д��(�������ķ�ʽ)*/
int my_strlen(char* n)//�ַ���������Ԫ�ص�ַ��������char*
{
	int cont = 0;       //�������� ��������ʱ������
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
           /*�ݹ��˼��*/
  /*   my_strlen("abc")
       1+my_strlen("bc")
       1+1+my_strlen("c")
       1+1+1+my_strlen("")
       1+1+1+0                 ���� */
int my_strlen(char* n)           
{      
	if (*n != '\0')
		return 1 + my_strlen(n + 1);//n+1 ��ʾ��ַ��1
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


//�ݹ������
           /*��n�Ľ׳�*/
int Fac(n)
{
	if (n <= 1)
		return 1;   //������ѧ��ʽд��
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

/*���n��쳲�������*/ //����һ����=ǰ������֮��
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
/*�����������Ч��̫�ͣ�����������*/  //�����ķ�ʽ
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		      /* 1 1 2 3 5 8 13
						   a b c   c��ֵΪa+b
						     a b c   a��ֵ����һ�ε�b��, b��ֵ����һ�ε�c��  
							   a b c     ����������   */ 
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





//����
int main()
{
	int arr[10] = { 1 };//����ȫ��ʼ��
	char ch[5 + 5] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
	int arr2[] = { 0 };//[]�в�ָ��Ԫ�ظ��������Զ����ݺ����ʼ��������ȷ������Ԫ�صĸ���
	//����Ҳ���Է��ַ�
	int arr3[10] = { '1', 'b', 'i', 't' };//�����С��10   ��1�����ַ�1������������1
	int ch2[] = { "abc" };//�����С��4������һ�� \0 Ŷ
	
	char ch[] = "bit";
	char ch4[] = { 'b', 'i', 't', '\0' };// \0���ַ����Ľ�����־
	printf("%s\n", ch);
	printf("%s\n", ch4);

	return 0;
}

//����ķ���
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

//һά�������ڴ�Ĵ洢
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));//ʹ��ָ��p����������
	}                           //ֻ��Ϊ�������ڴ�����������ŵ�
	

	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p<=====>%p\n", i,&arr[i],p+i);//%p�Ǵ�ӡ��ַ
	            //p+i������arr���±�ΪiԪ�صĵ�ַ
	}
	return 0;
}