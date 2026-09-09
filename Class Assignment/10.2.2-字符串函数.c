//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////int mylen(const char* s) {
////	int cnt = 0;
////	while(s[idx] != '\0') {
////		idx++;
////	}
////	return idx;
////}
//
////这个适用于有一个值不相等，也能处理任意位置不相等
////int mycmp(const char* s1, const char* s2) {
////	//int idx = 0;
////	//while (s1[idx] == s2[idx] && s1[idx] != '\0') {
////	//	/*if (s1[idx] != s2[idx]) {
////	//		break;
////	//	}
////	//	else if(s1[idx  == '\0'{
////	//		break;
////	//	}*/
////	//	idx++;
////	//}
////	while (*s1 == *s2 && *s1 != '\0') {
////		s1++;
////		s2++;
////	}
////	return *s1 - *s2;
////}
//
////char* mycpy(char* dst, const char* src) {
////	//int idx = 0;
////	//数组版本
////	/*while(src[idx] !='\0') {
////		dst[idx] = src[idx];
////		idx++;
////	}
////	dst[idx] = '\0';*/
////	//return dst;
////
////	//指针版本
////	char* ret = dst;
////	while(*dst++ = *src++)；
////	//*dst = '\0';
////
////	return ret;
////}
//
//int main(int argc, char const* argv[]) {
//	//1.strlen函数
//	//char line[] = "Hello";
//	//printf("strlen=%lu\n", strlen(line));//5
//	//printf("sizeof=%lu\n", sizeof(line));//6
//
//	//2.strcmp函数
//	/*char s1[] = "abc";
//	char s2[] = "abc";
//	char s3[] = "bbc";
//	char s4[] = "Abc";
//	printf("%d\n", strcmp(s1, s2));
//	printf("%d\n", strcmp(s1, s3));
//	printf("%d\n", strcmp(s1, s4));*/
//
//	//3.strcpy函数
//	/*char s1[] = "abc";
//	char s2[] = "abc";
//	strcpy(s1, s2);*/
//
//	//4.字符串中找字符
//	/*char s[] = "Hello";
//	char *p = strchr(s, "l");
//	char c = *p;
//	*p = '\0';
//	char* t = (char*)malloc(strlen(s) + 1);
//	strcpy(t, s);
//	printf("%s\n", t);
//	free(t);*/
//
//	return 0;
//}