//这是一个条件编译指令
//如果没有定义这个红的话，就定义一个这个宏
//如果定义了，那这些代码就不会出现在 .i 文件里 .c--.i--.o
//这样就可以避免重复声明和定义了，也就是避免了套娃操作
#ifndef _MAX_H_
#define _MAX_H_

int max(int a, int b);
//全局变量的声明,extern就是告诉编译器在项目的某个地方有个叫gAll的东西
extern int gAll;

struct Node {
	int value;
	char* name;
};

#endif