#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()

{
	int a = 0;
	int b = 0;
	scanf("%d*%d", &a, &b); 
	int c = a * b ;
	printf("��Ϊ%d\n", c);
	return 0;
}



int main()
{
	    char arr1[] = { 'a', 'b', 'c' };// c�ĺ��治֪������ɶ�����������ֵ�����ӡ
		char arr2[] = "abc";            //�ַ�����ĩβ��һ�� ��\0����
		printf("%s\n", arr1);
	    printf("%s\n", arr2);    //%d �Ǵ�ӡ���� 
		                         //%s �Ǵ�ӡ�ַ���
	return 0;
}


#include <stdio.h>
int main()
{
	int a = 0;
	scanf ("%d", &a);  //����һ������
	if (a>=140)
	{
		printf("Genius\n");
	}
	else
	{
		printf("�Բ��𣬲�֧�ֲ�ѯ\n");
	}
	return 0;
}


#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= b)
		printf("�ϴ�ֵ�ǣ�%d\n", a);
	else
		printf("�ϴ�ֵ�ǣ�%d\n", b);
	return 0;
}


#include <string.h>
int main()
{
	char arr1[] = { "abc"};
	printf("%d\n", strlen(arr1));
	return 0;
}


int main()
{
	printf("%c\n", ' \'  ');
	printf("%c\n", " \" ");
	return 0;
}


int main()
{
	printf("%d\n", strlen("abcdf"));//  �����6
	printf("%d\n", strlen("c:\test\328\test\test.c"));
		return 0;
}


int main()
{
		int input = 0;
		printf("�������ѧϰ\n");
		printf("��Ҫ�ú�ѧϰ��1 / 0�� ? \n");
		scanf("%d", &input);
		if(input == 1)             //�ж�input�ǲ��ǵ���1���ж���==    �﷨Ҫ��
			printf("��offer\n");
		else
			printf("�ؼ�������\n");
		return 0;
}


int main()
{
	int line = 0;
	while(line < 2000)
	{
		printf("д���� %d\n", line);
		line++;
	}
	if(line = 2000)
	{
		printf("��offer\n");
	}

		return 0;
}


int main()
{
	int arr1[10];                 // ��������ֵ
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr3[10] = { 1, 2, 3, };  //����ȫ�����������Ĭ����0

	printf("%d\n", arr2[4]);     // arr[4]���Ƿ��������±���4��Ԫ�أ�����5��

	int i = 0;
	while(i <10)
		{
		printf("%d ", arr2[i]);
		i++;
	    }

		return 0;
}


int  main()
{
	int a = 10;
	int b = a++;   //����++����ʹ�ã���++
	printf("%d\n", a);   //�����10
	printf("%d\n", b);   //�����11
	return 0;
}
int main()
{
	int a = 10;
	int b = ++a;   //ǰ��++����++����ʹ��
	printf("%d\n", b);   //�����11
	printf("%d\n", a);
	return 0;
}

