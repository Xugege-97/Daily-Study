#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>//.h����һ��ͷ�ļ�
                      std-��׼ i-input���� o-output���
int main()
{
	printf("hello world\n");// printf ��һ����ӡ����  \n��ʾΪ����
		                         ����һ���⺯��������ʹ�õ�ʱ��Ҫ����ͷ�ļ� 
	return 0;
}


#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a); //��%d�� ��ʾҪ�����ֵ��int�ͣ�
	                 //&-ȡ��ַ���� 
	                 //�����������ֵ ���� ��ַΪa�Ŀռ�
	printf("%d\n", a);//��ӡһ����ֵ����ӡ˭�أ���ӡa
	return 0;
}

int main(void)  //�����void������ȷ��ʾmain��������Ҫ����
{
	return 0;
}



#include <stdio.h>
int main()
{                //sizeof ��C���Ե�һ��������
	             //sizeof ������Ǻ���������������͵ı�����ռ�ڴ�Ĵ�С
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
int a = 111;//ȫ�ֱ���-���ڴ�ں��ⲿ
int main()
{   
    int a = 10;//�ֲ�����-���ڴ���������
	                  
	printf("%d\n", a); //�ֲ�������ȫ�ֱ������ֳ�ͻ��ʱ�򣬾ֲ�����
	return 0;
}




#include <stdio.h>   
int main()           //�������
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
  extern year;   //extern�������ⲿ��ʶ����
int main()
{
	int a = 100;
	printf("%d\n", year);
	return 0;
}

#include <stdio.h> 
int main()
{
	const int a = 20;//����
	printf("%d\n", a);

	a = 10;//�ı�a��ֵ
	printf("%d\n", a);
	                   //�����ܲ��ˣ�const������int������a���ǳ�������Ϊ������
	return 0;
}




#include <stdio.h> 
#define max 200 //����һ������  ����max  ����ֵΪ200
int main()
{
	printf("%d\n", max);

	// max = 100; ��ı�����ֵ�����Ǹı䲻�ˣ�˵���ǳ���
	// printf("%d\n", max);

	return 0;
}





#include <stdio.h>
enum sex   //�Ա�
{
	male=9,   //��
	female, //Ů
	secret  //����
};

int main()
{
	//enum sex zhangsan = male

	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}