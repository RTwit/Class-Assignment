//#include<stdio.h>
//
//int main() {
//	int x;
//	scanf_s("%d", &x);
//	int digit;
//	int ret = 0;
//	//以下方法会丢失前导零，700变成7
//	//while (x>0)
//	//{
//	//	digit = x % 10;
//	//	ret = ret * 10 + digit;
//	//	x /= 10;
//	//}
//	//printf("逆序后的数是：%d\n", ret);
//
////或者700变成007之类的,可完全逆序输出
//	while (x > 0)
//	{
//		digit = x % 10;
//		printf("%d", digit);
//		ret = ret * 10 + digit;
//		x /= 10;
//	}
//
//	return 0;
//}