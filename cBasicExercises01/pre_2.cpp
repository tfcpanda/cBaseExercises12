/****************************************************************************
* �ļ���: pre_2 
* ���ܣ�������������a��b�����У�a>=b>=0)����a��b���̺�����
* ����: TFC 
* ����: 2020-05-12 
*/
#include<stdio.h>
main()
{
   int a, b, quo, rem;                       
   scanf("%d", &a);                       
   scanf("%d", &b);                                                    
   quo = a / b;
   rem = a - (b*quo);
   printf("%d\n", quo);       
   printf("%d\n", rem);    
}