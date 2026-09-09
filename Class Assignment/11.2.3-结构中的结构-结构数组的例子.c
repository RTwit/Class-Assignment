//#include<stdio.h>
//
//struct time {
//	int hour;
//	int minutes;
//	int seconds;
//};
//
//struct time timeUpdate(struct time now);
//
//int main(void)
//{
//	//一个结构数组，类型是struct time；此时的数组名依旧代表着数组的首地址
//	struct time testTime[5] = {
//		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
//	};
//	int i;
//
//	for ( i = 0; i < 5;  ++i ) {
//		printf("Time is % .2i: % .2i : % .2i\n",
//			testTime[i].hour, testTime[i].minutes, testTime[i].seconds);
//
//		//它是一个struct time的结构变量，所以可以被赋值，也可以被传递给另外一个函数，如果那个函数需要的话
//		testTime[i] = timeUpdate(testTimes[i]);
//
//		printf("...one second later it's % .2i: % .2i : % .2i\n",
//			testTime[i].hour, testTime[i].minutes, testTime[i].seconds);
//	}
//	return 0;
//}
//
//struct time timeUpdate(struct time now)
//{
//	++now.seconds;
//	if (now.seconds == 60) {
//		now.seconds = 0;
//		++now.minutes;
//
//		if (now.minutes == 60) {
//			now.minutes = 0;
//			++now.hour;
//
//			if (now.hour == 24) {
//				now.hour = 0;
//			}
//		}
//	}
//}