/*#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//正序分解整数，输入一个非负整数。
	int x;
	scanf_s("%d", &x);
	//srand((unsigned int)time(NULL)); // 初始化随机数种子
	//int x = rand() % 100000; // 生成0~99999的随机数

	//if (x == 0) {
	//	printf("x=0，最高位权值为1\n");
	//	return 0;
	//}
	//// 处理负数（取绝对值）
	//int abs_x = x < 0 ? -x : x;

	//int t = 0;
	//输出的每一个数都是逆序的，所以要先逆序该数再输出

	////该方法只适用末尾没有零的非负整数。
	//do {
	//	int d = x % 10;
	//	t = t * 10 + d;
	//	x /= 10;
	//} while (x > 0);
	//printf("t=%d\n", t);
	//x = t;//此处循环完后，x的数给了t，自己就变成了0，所以要恢复原数
	////依次输出
	//do {
	//	int d = x%10;
	//	printf("%d", d);
	//	if (x>=10)
	//	{
	//		printf(" ");
	//	}
	//	x /= 10;
	//} while (x >= 0);
	//printf( "\n") ;
	

	//该方法末尾有零的非负整数也能用。
	//要先算出整数的位数，然后再逆序该数。
	//也可以先算出整数的位数，然后再用pow函数求出10的n次幂，最后用该数除以10的n次幂得到逆序的数。
	//还可以在算出整数的位数后，然后用数组存储，最后输出数组的每个数。
	//计算位数,mask的数由位数决定。
	int cnt = 0;
	int mask = 1;
	int temp = x;
	if(temp >9){
		do {
			temp /= 10;
			mask *= 10;
		} while (temp > 9);
	}
	//int mask = pow(10, cnt - 1);

	do {
		int d = x / mask;
		printf("%d", d);
		if (x>9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);//x>0作为条件的话，当x的末尾有零时，x会变成0，导致循环提前结束。

	printf("\n");

	return 0;
}
*/