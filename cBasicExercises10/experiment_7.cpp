#include<stdio.h>
/*
输入二个实数，求二数的和差积商(均保留二位小数)。

输入输出的过程如下(红色为输入，蓝色为输出，注意逗号冒号都须在英文状态下输入)：

输入二个数,以逗号作为间隔:35,4.3456
35.00+4.35=39.35
35.00-4.35=30.65
35.00*4.35=152.10
35.00/4.35=8.05

*/
int main(void)
{
  float a,b;       //声明变量
  printf("输入二个数,以逗号作为间隔:");
     scanf("%f,%f",&a,&b);     //输入数据
  printf("%.2f+%.2f=%.2f\n",a,b,a+b);  //输出数据,和
  printf("%.2f-%.2f=%.2f\n",a,b,a-b);  //输出数据,和
  printf("%.2f*%.2f=%.2f\n",a,b,a*b);  //输出数据,和
  printf("%.2f/%.2f=%.2f\n",a,b,a/b);  //输出数据,和
 
}