//#include <stdio.h>
//#include "student.h"
//
//void read(FILE* fp, int index);
//
//int main(int argc, char const* argv[]) {
//	FILE* fp = fopen("student.data", "r");
//	if (fp) {
//		//倒过来读0个，也就是把光标位置移到末尾
//		//0L的意思是文件位置指针从文件末尾向后移动0个字节，就是在文件末尾不动
//		fseek(fp, 0L, SEEK_END);
//		//然后用ftell来获取当前位置---也就是直接得到文件的大小
//		long size = ftell(fp);
//		//因此可以得到有几个这样的结构
//		int num = size / sizeof(Student);
//		int index = 0;
//		printf("有%d个数据，你要看第几个：", num);
//		scanf_s("%d", &index);
//		read(fp, index - 1);
//		fclose(fp);
//	}
//	return 0;
//}
//
//void read(FILE* fp, int index)
//{
//	//read函数拿到文件指针和index后，就从文件的头开始往前走到index*几个student size的那个位置上去
//	//到了以后，就把它给读出来
//	fseek(fp, index * sizeof(Student), SEEK_SET);
//	Student stu;
//	if (fread(&stu, sizeof(Student), 1, fp) == 1) {
//		printf("第%d个学生：", index + 1);
//		printf("\t姓名：%s\n",stu.name);
//		printf("\t性别：");
//		switch (stu.gender) {
//		case 0:printf("男\n"); break;
//		case 1:printf("女\n"); break;
//		case 2:printf("其他\n"); break;
//		}
//		printf("\t年龄：%d\n", stu.age);
//	}
//}