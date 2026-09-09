//#include<stdio.h>
//
////会报错，原因是：
//// switch的标签必须是常量表达式，
//// 而const限定的变量不是常量表达式
////const int red = 0;
////const int yellow = 1;
////const int green = 2;
//enum COLOR{RED,YELLOW,GREEN, NumCOLORS};
////这里NumCOLORS排在第3，刚好说明前面有3个值
//
//
//int main(int argc, char const* argv[]) {
//	/*int color = -1;
//	char* colorName = NULL;*/
//
//	/*printf("输入你喜欢的颜色得代码：");
//	scanf_s("%d", &color);
//	switch (color) {
//	case RED:colorName = "red"; break;
//	case YELLOW:colorName = "yellow"; break;
//	case GREEN:colorName = "green"; break;
//	default:colorName = "unknow"; break;
//	}
//	printf("你喜欢的颜色是%s\n：",colorName);*/
//
//	//自动计数的枚举
//	int color = -1;
//	char* ColorNames[NumCOLORS] = {
//		"red","yellow","green",
//	};
//	char* colorName = NULL;
//
//	printf("输入你喜欢的颜色得代码：");
//	scanf_s("%d", &color);
//	if (color >=0 && color <NumCOLORS) {
//		colorName = ColorNames[color];
//	}
//	else {
//		colorName = "unknown";
//	}
//	printf("你喜欢的颜色是%s\n", colorName);
//
//	return 0;
//}