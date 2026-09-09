//#include<stdio.h>
//#include<stdbool.h>
//
////通过结构与函数去计算闰年
//struct date {
//	int month;
//	int day;
//	int year;
//};
//
////函数
////润年
//bool isLeap(struct date d);
//int numOfDays(struct date d);
//
//int main(int argc,char const* argv[]) 
//{
//	struct date today, tomorrow;
//
//	printf("Enter today's dare(mm dd yyyy):");
//	scanf_s("%i %i %i",&today.month, &today.day, &today.year);
//
//	if (today.day != numOfDays(todat)) {
//		tomorrow.day = today.day + 1;
//		tomorrow.month = today.month;
//		tomorrow.year = today.year;
//	}
//	else if (today.month == 12) {
//		tomorrow.day = 1;
//		tomorrow.month = 1;
//		tomorrow.year = today.year +1;
//	}
//	else {
//		tomorrow.day = 1;
//		tomorrow.month = today.month + 1;
//		tomorrow.year = today.year;
//	}
//
//	printf("Tomorrow's date is %i-%i-%i.\n",
//		tomorrow.year, tomorrow.month, tomorrow.day);
//	return 0;
//}
//
//int numOfDays(struct date d)
//{
//	//每个月的天数
//	int days;
//	const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	//调用isLeap函数查看是否是闰年
//	if (d.month == 2 && isLeap(d))
//		days = 29;
//	else
//		days = daysPerMonth[d.month - 1];
//	//单一出口原则
//	return days;
//}
//
//bool isLeap(struct date d)
//{
//	bool leap = false;
//
//	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
//		leap = true;
//	return leap;
//}