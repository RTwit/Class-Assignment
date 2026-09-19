//#include<stdio.h>
//
////C99做法
////const double PI = 3.14159;
//// 老版本，用宏
//#define PI 3.14159
//#define PI2 2*PI //PI*2
//
////下面的反斜杠表示宏的定义还未结束
//#define PRT printf("%f ",PI); \
//			printf("%f\n",PI2)
//
//int main(int argc, char const* argv[]) {
//	printf("%f\n", 2 * PI * 3.0);
//	printf("%f\n", PI2 * 3.0);
//
//	//用的时候直接写一个宏的名字就行
//	PRT
//	return 0;
//}