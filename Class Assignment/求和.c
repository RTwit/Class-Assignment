//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	//前n项的和,f(n)= 1 + 1/2 + 1/3 + ... + 1/n
//	int n;
//	int i;
//	double ret = 0.0;
//	
//	scanf("%d", &n);
//	for (i=1;i<=n;i++) {
//		ret += 1.0 / i;
//	}
//	printf("f(%d)=%f\n", n, ret);
//
//	//f(n)= 1 - 1/2 + 1/3 - 1/4 + ... + (-1)^(n+1)/n
//	double sum = 0.0;
//	//int sign = 1; // 用于控制符号，初始为正
//	double sign = 1.0;
//
//	scanf("%d", &n);
//	//for (i = 1; i <= n; i++) {
//	//	sum += sign*1.0 / i;
//	//	sign = -sign; // 每次循环后改变符号
//	//}
//	for (i = 1; i <= n; i++) {
//		sum += sign / i;
//		sign = -sign; // 每次循环后改变符号
//	}
//	printf("f(%d)=%f\n", n, sum);
//
//	return 0;
//}