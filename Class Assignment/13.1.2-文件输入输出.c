//#include <stdio.h>
//
//int main(int argc, char const* argv[]) {
//	FILE* fp = fopen("C:/Users/蔡志巧/Desktop/准心.txt", "r");
//	if (fp) {
//		int num;
//		//MSVC 的安全函数fscanf_s，读取 int 类型，必须带上大小参数
//		fscanf_s(fp, "%d", &num);
//		printf("%d\n", num);
//		fclose(fp);
//	}
//	else {
//		printf("无法打开文件\n");
//	}
//	return 0;
//}