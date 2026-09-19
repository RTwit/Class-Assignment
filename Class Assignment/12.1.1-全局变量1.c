//#include<stdio.h>
//
//int f(void);
//
////全局变量，没有做初始化的全局变量会得到`0`值
//int gAll = 12;
//
////这两个函数内的__func__是由前后各两个下划线和func组成的
//// 作用是将当前的函数名由编译器去输出到结果里，因为是字符类型，所以要用%s
//int main(int argc, char const* argv[]) {
//	printf("in %s gAll=%d\n", __func__, gAll);
//	f();
//	printf("agn in %s gAll=%d\n", __func__, gAll);
//	return 0;
//}
//
//int f(void)
//{
//	printf("in %s gAll=%d\n", __func__, gAll);
//	gAll += 2;
//	printf("agn in %s gAll=%d\n", __func__, gAll);
//	return gAll;
//}