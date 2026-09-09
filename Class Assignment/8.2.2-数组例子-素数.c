//#include<stdio.h>
//#define number 100
//
////用数组做--拿比x小的-素数-来测试是不是就行
//int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);
//
//int main(void) {
//	//const int number = 100;
//	int prime[number] ;//构造素数表
//	prime[0] = 2;//初始化第一个素数
//	int count = 1;
//	int i = 3;
//	//调用函数
//	while (count < number) {
//		//用isPrime发现i是一个素数的话，就把i放到prime数组里
//		if (isPrime(i, prime, count)) {//此处prime传递的是数组的地址，在 C 语言中，数组名（如 prime）在表达式中会自动转换为指向数组首元素的指针。
//			prime[count++] = i;//将i写入当前的位置后，位置count后移
//		}
//		i++;
//	}
//	for (i = 0; i < number; i++) {
//		printf("%d", prime[i]);
//		if ((i + 1) % 5) {//判断当前下标 i 加 1 后能否被 5 整除--每五个数就\t
//			printf("\t");
//		}
//		else {
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//
//int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) {//这里 int knownPrimes[] 实际上等价于 int* knownPrimes，接收的就是一个指针。
//	int ret = 1;
//	int i;
//	//遍历数组
//	for (i = 0; i < numberOfKnownPrimes; i++) {
//		if (x % knownPrimes[i] == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}