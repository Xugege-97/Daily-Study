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
	if (5 == num)   //�ж�5��num��ֵ
	{
		printf("hehe\n");
	}
	return 0;
}


���1-100֮�������    
���� һ
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
//������
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
//������
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i+=2)//ѭ��50�Σ�ֱ���������������������1 3 5 7 9
	{                          //i+=2��Ϊi��ʼ��Ϊ1��i=i+1
		printf("%d ", i);
	}
	return 0;
}

switch ���   �������ּ����������ʾ���ڼ�
/*  switch(���α��ʽ)
    {
	����
    }
*/

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)  //  �ص㣺switch�����������Ǽ�����ֱ�Ӵ���һ������ȥ
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}
}          
 �Ǽ��� Ҫ������һ�������ǹ����գ�������������Ϣ���أ����������ͺ��鷳��
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)  //switch�����������Ǽ�����ֱ�Ӵ���һ������ȥ
	{
	case 1:
	case 2:
	case 3:
	case 4:      //switch���治һ��Ҫbreak���ÿ�����ʵ�ֵĹ���
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:   //Ĭ��ѡ�Ҳ����˵û�з��ϵ���䣬���Զ�����һ��
		printf("ѡ�����\n");
		break;
	}
	return 0;
}



ѭ��������  while  �� for�� do while
/*if��䣺  if(����)
            ��䣻          */
/*while��䣺while�����ʽ��
             ѭ����䣻     */
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;//��ֹѭ��
			continue;//continue����ֹ����ѭ����Ҳ����continue�������䲻��ִ�У�ֱ������while���жϲ��֣�������һ������ж�
		printf("%d ",i);
		i++;
	}
	return 0;
}

int main()
{
	int ch = 0;
	ch = getchar();//getchar-�ӱ�׼����(���̣��еõ�  һ�� �ַ�
	putchar(ch);  //��ӡһ���ַ�����׼�������Ļ��
	return 0;
}


int main()
{
	int ch = 0;
	//��ȡʧ�ܵ�ʱ��getchar����eof
	while ((ch = getchar()) != eof)//��ctrl+z�Ϳ��Խ����ˣ�Ҳ���Ƿ���eof��
	{
		putchar(ch);
	}
	return 0;
}


int main()
{
	char password[10] = { 0 };
	printf("����������:>");//  123456\n
	scanf("%s", password);//������ֱ�Ӿ��ǵ�ַ�ˣ����Բ���ȡ��ַ����  ���ߵ���123456  
	//��������
	int ch = 0;  //���Ƿ��ص�ֵ��EOF=-1����char���;ʹ治���ˣ�����Ҫ��int
	while ((ch = getchar()) != '\n')
	{
		getchar();

	}
	printf("��ȷ��(Y/N):>");
	ch=getchar(); //ԭ�������ﻹʣһ�� \n ֱ�Ӷ�ȡ����
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}
	return 0;
}

//���0~9������
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



forѭ��
ѭ����  ��ʼ�����жϲ��֡��������� ��Ӱ��ѭ���Ĳ�ͬ������whileѭ���Ļ�������
for�����ʽ1,�����ʽ2�����ʽ3��
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


forѭ������
int main()
{
	for (;;)   //3�����ֶ�ʡ�ˣ���ʾ��Ϊ��
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


 do while���
/* do 
       ѭ����䣻
   while�����ʽ����*/
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


����׳�
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;//��ʼ������0�Ļ�����ô�˶���0
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


����ʱ�䵱�����ѡ�



������������в��Ҿ����ĳ����
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 6;//Ҫ���ҵ���
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);// 40/4=10  �ȼ���һ���ж��ٸ���
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
			printf("�ҵ��ˣ��±�ʶ:> %d\n", i);
	}
	if (i>sz)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}             //Ч��̫����

���ֲ���-�۰����
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
		}                      //��Χ���������
		else if (k > arr[mid] )
		{
			left = mid + 1;
		}                      //��Χ�������ұ�
		else
		{
			printf("�ҵ��ˣ��±���:>%d\n", mid);    //�պ���
			break;
		}
	}
	if (left>right)
	{
		printf("�Բ����Ҳ���\n");
	}
	
	return 0;
}

          