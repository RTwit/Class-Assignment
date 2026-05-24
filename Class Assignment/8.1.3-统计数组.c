//#include<stdio.h>
////#define number 10
//
////写一个程序，输入数量不确定的[0,9]范围内的整数，
//// 统计每一种数字出现的次数，输入-1结束
//int main(void) {
//	//const int number = 10;//数组大小，C89/C90会报错，用不了，只有C99以上才可以支持变量做数组长度，除非使用#define number 10才可以
//	int x;
//	int count[10];//定义数字出现次数的数组
//	int i;//初始化，避免数是自动产生的
//
//	//初始化数组
//	for (i = 0; i < 10; i++) {
//		count[i] = 0;
//	}
//
//	scanf_s("%d", &x);
//	//读入一个数后继续读入下一个数，每读一个，记一次数
//	while (x != -1) {
//		if (x >= 0 && x <= 9) {
//			count[x] ++;//数组参与运算
//		}
//		scanf_s("%d", &x);
//	}
//
//	//遍历数组
//	for (i = 0; i < 10; i++) {
//		printf("%d:%d\n", i, count[i]);
//	}
//
//	return 0;
//}