#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//�����������в���һ������k
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)�������������ܴ�С����λ���ֽ�-40  sizeof��arr[0])������ǵ�һ������Ĵ�С-4
	scanf("%d", &k);
	//���ֲ���
	int left = 0;
	int  right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;//������������̫�󣬻����
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
			printf("�ҵ��ˣ��±���:> %d\n", mid);
			break;
		}
	
	}
	if (left>right)
	{
		printf("�Բ����Ҳ���");
	}
	return 0;
}

��������ƽ��ֵ��д��
int main()
{
	int a = 10;
	int b = 24;
	int c = a + (b - a) / 2;//��֤����������
	printf("%d", c);
	return 0;
}



����ַ��ƶ����м��ۣ�����ˮ�Ƶĸо�
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "#################";
	//����ַ������Ⱥ���Ҫ
	/* char buf[]="bit"
	      [b i t \0]
	�±�   0 1 2  3  
	1. sizeof��buf)/sizeof��buf[0])-2;  �и�\0Ҫ�������Ҫ���1
	2. strlen(buf)-1;  ����-1�������һ�����±�                     */
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��λ�Ǻ���  ��Ҫͷ�ļ�<windows.h>
		system("cls");//ִ��ϵͳ���� ���� ��Ҫͷ�ļ�<stdlib.h>
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}


ģ���¼���棬ֻ�ܵ�¼���Σ��ɹ��͵�¼��ʧ�ܾ��˳�
int main()
{
	int i = 0;
	char password[10] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);//�ַ������ǵ�ַ�ˣ����Բ��� &������    �ַ���������%s,��������%d
		//�����ַ����ıȽϲ����� == ��Ӧ��ʹ��strcmp����
		if (strcmp( password,"123456") == 0)//���������� 123456
		{
			printf("������ȷ����¼�ɹ�\n");
				break;
		}
		else
		{
			printf("�������\n");
		}
	}

	if (i == 3)
	{
		printf("������������˳���¼\n");
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
	C = a + b + c; //�ܳ�
	float p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c)); //���
	printf("circumference= %.2f  area= %.2f", C, S);
	return 0;
}


��������Ϸ
/*   1.������һ�������
     2.ÿ���淴��һ�Σ�֮������Ϊֹ   */
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
	int ret=rand()%100+1;//�������������  %100 ��ʾ��Χ��0~99��+1.��Χ����1~100
	//printf("%d\n",ret);
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
        else
        {
			printf("��ϲ��¶���\n");
			break;
        }

	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������������һ�ξͺ���
	do 
	{
		mesu();
		printf("��ѡ��(0/1):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��:>\n");
		}
	} while (input);
	return 0;
}



/*   goto ��䣺��ת��ȥ
�������ж��forѭ��Ƕ�׵ĳ���
*/
�ػ�����
#include<stdlib.h>
int main()
{
	char input[20] = "";
	system("shutdown -s -t 60");//����ϵͳ�Ĺػ�����

again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺�Ұ��㣬��ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "�Ұ���") == 0)
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
	system("shutdown -s -t 60");//����ϵͳ�Ĺػ�����
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺�Ұ��㣬��ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "�Ұ���") == 0)
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
	scanf("%d %d %d", &a, &b, &c);//����������
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}               //a�����������
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}                //a���������
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}                //c��������С��
	printf("%d %d %d\n",a, b, c);//a��������ģ�c�������С��
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
	շת�����  �����Լ��
    ��С�������Ĺ�ʽ��   a*b/���Լ��
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}