#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 5,12,3,23,1,6,7,66,20,9 };
	int t = 0;
	for (int i = 0; i < 9; i++)   //ע������ֻ��Ҫi<9,��Ϊÿ�������������Ƚϣ�ֻ��Ҫѭ��9��
	{
		for (int j = 0; j < 10-1-i ; j++)  //ÿִ��һ��ѭ����������������󣬾ͻ���һ��������Ƚ�
		{
			//���ǰ��ı������ں���ģ�����λ��
			if (a[j] > a[j + 1])
			{
				t = a[j];     //���м����������������λ�õ�ֵ
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	//����С����˳���������
	for (int q = 0; q < 10; q++)
	{
		printf("%d\n", a[q]);
	}

	system("pause");
	return 0;

}