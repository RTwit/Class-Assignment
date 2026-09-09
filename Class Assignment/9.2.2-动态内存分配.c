//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void) {
//	/*int num;
//	int* a;
//	int i;
//	printf("输入数量：");
//	scanf_s("%d", &num);
//	a = (int*)malloc(num * sizeof(int));
//	for (i = 0; i < num;i++) {
//		scanf_s("%d", &a[i]);
//	}
//	for (i = num - 1; i >= 0;i--) {
//		printf("%d", a[i]);
//	}
//	free( a );*/
//
//	//能分配多少空间
//	void* p;
//	int cnt = 0;
//	//这里没次循环p都会被malloc函数分配的内存的新地址覆盖，要么分配一块立马释放，要么全部分配后，使用指针数组去存放新分配的p，最后统一释放。
//	while ((p = malloc(100 * 1024 * 1024))) {
//		cnt++;
//		free(p);
//	}
//	printf("分配了%d00MB的空间\n", cnt);
//
//	return 0;
//}