//������ƽ������ 
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
	printf("��ݶ����׵ĳ��ü������ͼ�����\n��ѡ��������ͻ����ã�\n1���ӷ�\n2������\n3���˷�\n4������\n5����ƽ��\n���ࣺ�˳�\n");
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
			printf("��������Ҫ��ƽ��������");
			scanf("%lf",&num1);
			result = sqrt(num1);
			goto  result;
		case 20010712:
			printf("2001-2020, HS all rights reserved.\n");
			system("pause");
			system("cls");
			goto start;
	}
	printf("�������һ����������");
	scanf("%lf",&num1);
	printf("������ڶ�����������");
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
		printf("�������ǣ�%lf\n",result);
	 } 
	printf("ѡ1�ص���ʼ�����������˳�����\n");
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
