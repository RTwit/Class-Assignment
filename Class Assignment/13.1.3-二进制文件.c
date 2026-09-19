//#include <stdio.h>
//#include "student.h"
//
//void getList(Student aStu[], int num);
//int save(Student aStu[], int num);
//
//int main(int argc, char const* argv[]) {
//	int num = 0;
//	printf("输入学生数量：");
//	scanf_s("%d", &num);
//	//建立一个结构的数组，在这个数组里，每一个单元都是那个结构
//	Student aStu[num];
//
//	getList(aStu, num);
//	if (save(aStu, num)) {
//		printf("保存成功\n");
//	}
//	else {
//		printf("保存失败\n");
//	}
//
//	return 0;
//}
//
//void getList(Student aStu[], int num) 
//{
//	//这是一个字符数组，大小是20
//	char format[STR_LEN];
//	//sprintf是向一个字符串输出
//	//%%--要输出一个百分号，s--输出那个字，%d--是后面那个值
//	//通过这种方式产生一个格式字符串
//	sprintf(format, "%%%ds", STR_LEN-1);
//
//	int i;
//	//循环遍历整个数组
//	for (i = 0; i < num; i++) {
//		printf("第%d个学生：\n", i);
//		printf("\t姓名：");
//		scanf("%d", &aStu[i].name);
//		printf("\t性别(0-男，1-女，2-其他)：");
//		scanf("%d", &aStu[i].gender);
//		printf("\t年龄：");
//		scanf("%d", &aStu[i].age);
//	}
//}
//
//int save(Student aStu[], int num)
//{
//	int ret = -1;
//	FILE* fp = fopen("student.data", "w");
//	if (fp) {
//		ret = fwrite(aStu, sizeof(Student), num, fp);
//		fclose(fp);
//	}
//	return ret == num;
//}