//新增开平方功能 
#include "alloc.h"

int main()
{
	int opcode1 = 0;
	double num1 = 0;
	double num2 = 0;
	double result = 0; 
	char _result[8*sizeof(double)];
	int code = 0;
	start:
	printf("快捷而简易的常用计算类型计算器\n请选择计算类型或设置：\n1：加法\n2：减法\n3：乘法\n4：除法\n5：开平方\n其余：退出\n");
	scanf("%d",&opcode1);
	switch (opcode1)
	{
		default:
			return 0;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			printf("请输入您要开平方的数：");
			scanf("%lf",&num1);
			result = sqrt(num1);
			goto  result;
		case 20010712:
			printf("2001-2020, HS all rights reserved.\n");
			system("pause");
			system("cls");
			goto start;
	}
	printf("请输入第一个运算数：");
	scanf("%lf",&num1);
	printf("请输入第二个运算数：");
	scanf("%lf",&num2);
	switch (opcode1)
	{
		case 1:
			result = num1 + num2;
			break;
		case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = num1 / num2;
			break;
	}
	result:
	{
		printf("计算结果是：%lf\n",result);
	 } 
	printf("选1回到开始，输入其它退出程序\n");
	opcode1 = 0;
	scanf("%d",&opcode1);
	switch (opcode1)
	{
		case 1:
			system("cls");
			goto start;
		default:
			break;
	}
	return 0;
}
