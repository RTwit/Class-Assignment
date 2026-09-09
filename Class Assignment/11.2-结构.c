//#include<stdio.h>
//
////int main(int argc, char const* argv[]) {
////	struct date {
////		int month;
////		int day;
////		int year;
////	};
////	struct date today;
////	today.month = 07;
////	today.day = 31;
////	today.year = 2026;
////
////	printf("Today's date is %i-%i-%i.\n", today.year, today.month, today.day);
////
////	return 0;
////}
//struct date {
//	int month;
//	int day;
//	int year;
//};
//int main(int argc, char const* argv[]) {
//
//	struct date today = { 07,31,2026 };
//	struct date thismonth = { .month = 7, .year = 2026 };
//
//	printf("Today's date is %i-%i-%i.\n", today.year, today.month, today.day);
//
//	return 0;
//}