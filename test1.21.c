#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>

//��ӡ����
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
	for (i = 101; i <= 200; i+=2)//���ų�ż��������������
	{
		int j = 0;
		int flag = 1;//����i������
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

//��ӡ1~100֮�京��9������
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
    %s-�ַ���
    %c-�ַ�
    %d-�з��ŵ�����
    %u-�޷��ŵ���      */

	return 0;
}

//�ҳ������ʮ�����е����ֵ
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


//��ӡ�˷��ھ���
int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
	     //��ӡ��
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%-2d ", i, j, k);
		}
		printf("\n");
	}
	return 0;
}

//���ֲ���
int main()
{
	int arr[10] = {  1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
	int k = 7;//��������Ҫ���ҵ���
	
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
			printf("�ҵ��ˣ��±���:>%d\n",mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Բ����Ҳ�����\n");
	}
	return 0;
}



//����
int Add(int x, int y)
{
	int z = x + y;//�ӷ�����
	return z;
}

int mian()
{
	int a = 10;
	int b = 30;
	int ret = Add(a, b);//add����һ���������������������a,b   ����ֵ��ret
	printf("%d\n", ret);
	return 0;
}


//��һ������ʵ���������Ľ���
void Swap(int x, int y)   //void���ǲ���Ҫ����ֵ
{
	int z = 0;
	x = y;
	y = z;      //���βε��޸ģ�����Ӱ��ʵ��
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d  b=%d\n", a,b);//����ǰ
    //��ֵ����
	Swap(a, b);//ʵ�δ��ݸ��βΣ��β�ֻ��ʵ�ε�һ����ʱ����
	printf("������a=%d  b=%d\n", a, b);//������
	return 0;
}         //�������ˣ�ԭ����x,y�ĵ�ַ  ��  a,b�ĵ�ַ  ��һ��

//�޸ĳ���

void Swap(int* px, int* py)  //��Ϊ�������Ĳ����ǵ�ַ��&a,&b��,��������Ҫ�� ָ��
{
	int z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d  b=%d\n", a, b);//����ǰ
   //��ַ����
	Swap(&a, &b);
	printf("������a=%d  b=%d\n", a, b);//������
	return 0;
}

//�ҳ������������ֵ
int max(x, y)//x,y�����βΣ�ֻ����������������õ�ʱ��Ŵ���
{
	int z = (x > y) ? (x) : (y);
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int get = max(a, b);//��ʵ�δ��ݸ��β�
	printf("%d\n", get);
	return 0;
}


//�ж�һ�����Ƿ�Ϊ����
//����Լ��������1-����   ����0-��������

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
	   case 1:printf("������:> %d\n", i); break;
	   case 0:printf("��������\n"); break;
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


//��һ������ʵ�ֶ��ֲ���
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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:>%d\n", ret);
	}
	return 0;
}

//ʵ��ÿ����һ��Add,num��ֵ�ͼ�1
int Add(int*p)
{
	(*p)++;    //��������Ҫ��Ҫ��Ȼ�ͱ����p++
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