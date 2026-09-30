//#include<stdio.h>
//#include <stdlib.h>
//#include"array.h"
//
//const BLOCK_SIZE = 20;
//
//Array array_create(int init_size)
//{
//	Array a;
//	a.size = init_size;
//	a.array = (int*)malloc(sizeof(int)*a.size);
//	return a;
//}
//
////还有一种可能的做法
////Array* array_create(Array* a, int init_size)
////{
//// 会有两种风险
//// 1.a==NULL
//// 2.a指向了一个曾经制作过的一个数组，那还得先做free的处理
////	a->size = init_size;
////	a->array= ...
////	return a;
////}
//
//void array_free(Array* a) {
//	free(a->array);
//	//保险起见，防止别人重复调用
//	a->array = NULL;
//	a->size = 0;
//}
//
////封装--可以将a的size给保护起来
//int array_size(const Array* a) {
//	return a->size;
//}
//
//int* array_at(Array* a, int index) {
//	if (index >= a->size) {
//		//index/BLOCK_SIZE算出来它位于哪一个block里，+1就是它的block从一开始数的那个序号
//		//会自动增长，一次长20个
//		//因为维持了infit函数不变，所以不能直接加block
//		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
//	}
//	return &(a->array[index]);
//}
//
////int array_get(const Array* a, int index) {
////	return &(a->array[index]);
////}
////
////void array_set(Array* a, int index, int value) {
////	a->array[index] = value;
////}
//
//void array_inflate(Array* a, int more_size) {
//	//malloc的空间不能变，所以可以重新申请一个空间
//	int* p = (int*)malloc(sizeod(int)(a->size + more_size));
//	int i;
//
//	//这里的循环可以换成标准库里的函数-memcpy。效率会很高
//	//拷贝原数组内的东西
//	for (i = 0; i < a->size; i++) {
//		p[i] = a->array[i];
//	}
//
//	//然后通过下面才能使其变大
//	free(a->array);
//	a->array = p;
//	a->size += more_size;
//}
//
//int main(int argc, char const argv[]) {
//	Array a = array_create(100);
//	printf("%d\n", array_size(&a));
//	//如果返回的是指针，就可以像这样子去赋值。
//	//如果不接受这样的写法，上面还有另一种方法
//	*array_at(&a, 0) = 10;
//	printf("%d\n", *array_at(&a, 0));
//
//	int number = 0;
//	int cnt = 0;
//	while(number != -1){
//		scanf_s("%d", &number);
//		if(number != -1)
//			*array_at(&a, cnt++) = number;
//
//		//scanf_s("%d", array_at(&a,cnt++));
//	}
//
//	//虽然a是个本地变量，但是它的结构里有array这个指针所指的东西
//	//所以需用free去释放它
//	array_free(&a);
//
//	return 0;
//}
