//#include<stdio.h>
//
//int main() {
//	int num;
//	int sum = 0;
//	int count = 0;
//
//	do {
//		scanf_s("%d", &num);
//		if (num != -1)
//		{
//			sum += num;
//			count++;
//		}
//	} while (num != -1);
//
//	//以下方法可省去一次if的判断
//	/*scanf_s("%d", &num);
//	while (num != -1)
//	{
//		sum += num;
//		count++;
//		scanf_s("%d", &num);
//	}*/
//
//	if (count > 0)
//	{
//		double avg = 1.0*sum / count;
//		printf("平均数为：%f\n", avg);
//	}else
//	{
//		printf("无法计算平均数，因为次数为零。\n");
//	}
//	
//	return 0;
//}