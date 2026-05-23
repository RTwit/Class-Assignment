#include<stdio.h>

int main() {
	//写一个程序计算用户输入数字的平均数，并输出所有大于平均数的数
	//运用数组存下所有读入的数
	//存在安全隐患：数组大小定义为100，未判断cnt会不会超过number可以使用的最大下标
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];//定义数组
	scanf_s("%d", &x);
	while (x != -1) {
		number[cnt] = x;//对数组中元素赋值
		/*
		{
			int i;
			printf("%d\t", cnt);
			for (i = 0; i <= cnt; i++) {
				printf("%d\t", number[i]);
			}
			printf("\n");
		}
		*/
		sum += x;
		cnt ++;
		scanf_s("%d", &x);
	}
	if (cnt > 0) {
		printf("%f\n", sum / cnt);
		int i;
		//遍历数组
		for (i = 0; i < cnt; i++) {
			//使用数组中的元素
			if (number[i] > sum / cnt) {
				printf("%d\n", number[i]);
			}
		}
	}

	return 0;
}