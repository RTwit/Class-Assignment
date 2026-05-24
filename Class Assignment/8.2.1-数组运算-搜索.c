//#include<stdio.h>
//
////给定一组数据，找出某个数据是否存在
///*
//找出key在数组a中的位置
//@paam key 要寻找的数字
//@param a 要寻找的数组
//@param length 数组a的长度
//@return 如果找到，返回其在a中的位置；如果找不到则返回-1
//*/
//int search(int key, int a[], int length);
//
//int main(void) {
//	//数组集成初始化
//	int a[] = { 2,4,6,7,1,3,5,9,11,13,23,14,32,56,97 };
//	int x, loc;
//	while(1) {
//		printf("请输入一个数字，输入-1停止：");
//		scanf_s("%d", &x);
//		if (x != -1) {
//			//传递三个值，调用search函数查找位置
//			loc = search(x, a, sizeof(a) / sizeof(a[0]));//loc=ret=i
//			if (loc != -1) {
//				printf("%d在第%d个位置上\n", x, loc);
//			}
//			else {
//				printf("%d不存在\n", x);
//			}
//		}
//		else {
//			break;
//		}
//	}
//	
//
//	return 0;
//}
//
//int search(int key, int a[], int length) {
//	int ret = -1;
//	int i;
//	//遍历数组
//	for (i = 0; i < length; i++) {
//		if (a[i] == key) {
//			ret = i+1;
//			break;
//		}
//	}
//	return ret;
//}