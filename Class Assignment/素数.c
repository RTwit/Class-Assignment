//#include<stdio.h>
// #include<math.h>
//
//int main() {
//
//	int x;
//	scanf_s("%d", &x);
//
//	int i ;
//	int isPrime = 1;//x是素数
//	for (i = 2; i < x;i++) {
//		if(x % i == 0) {
//			isPrime == 0;
//		}
//	}
//	if (isPrime == 1) {
//		printf("%d 是素数\n", x);
//	}
//	else {
//		printf("%d 不是素数\n", x);
//	}
//
//	return 0;
//
//	//int n;
//	//scanf_s("%d", &n);
//	//int i = 2;
//	//int is_prime = 1; // 假设 n 是素数
//	//for (i = 2; i < n; i++) {
//	//	if (n % i == 0) {
//	//		is_prime = 0; // n 不是素数
//	//		break;
//	//	}
//	//}
//	//if (is_prime && n > 1) {
//	//	printf("%d 是素数\n", n);
//	//}
//	//else {
//	//	printf("%d 不是素数\n", n);
//	//}
//	//return 0;
//}

//用函数做
//int isPrime(int x) {
//	int ret = 1;
//	int i;
//	if (x == 1 || (x % 2 == 0 && x != 2)) {
//		ret = 0;
//	}
//	else {
//		for (i = 3; i <= sqrt(x); i += 2) {//或者i<x-1
//			if (x % i == 0) {
//				ret = 0;
//				break;
//			}
//		}
//	}
//	return ret;
//}