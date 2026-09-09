//#include<stdio.h>
//
////void swap(int* pa, int* pb);
////void minmax(int a[], int len, int* min, int* max);
//int divide(int a, int b, int* res);
//
//int main() {
//	// 一、交换两个变量的值
//	/*int a = 5;
//	int b = 6;
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);*/
//
//	//二、场景二a，返回多个值
//	/*int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55, };
//	int min, max;
//	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//	printf("min=%d,max=%d\n", min, max);*/
//
//	/*
//		二、场景二a，返回函数运算的状态，两个函数做除法的函数
//		@return 如果除法成功，返回1；否则返回0
//	*/
//	int a = 5;
//	int b = 2;
//	int c;
//	if (divide (a,b,&c)) {
//		printf("%d/%d=%d\n",a,b,c);
//	}
//
//	return 0;
//}

//int divide(int a, int b, int* res)
//{
//	int ret = 1;
//	if (b == 0) {
//		ret = 0;
//	}
//	else {
//		*res = a / b;
//	}
//	return ret;
//}

/*
void minmax(int a[], int len, int* min, int* max)
{
	int i;
	*min = *max = a[0];
	for (i = 1; i < len; i++) {
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max) {
			*max = a[i];
		}
	}
}
*/

/*void swap(int* pa, int* pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}*/