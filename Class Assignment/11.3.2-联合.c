//#include<stdio.h>
//
//typedef union {
//	int i;
//	char ch[sizeof(int)];
//}CHI;
//
//int main(int argc, char const *argv[])
//{
//	CHI chi;
//	int i;
//	chi.i = 1234;
//	for (i = 0; i < sizeof(int); i++) {
//		//输出以字符表达的字节
//		printf("%02hhX", chi.ch[i]);
//	}
//	printf("\n");
//
//		return 0;
//}