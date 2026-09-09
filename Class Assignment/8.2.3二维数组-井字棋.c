//#define _CRT_SECURE_NO_WARNINGS
//#define size 3
//#include<stdio.h>
//
//int main() {
//   int board[size][size];
//   int i, j;
//   int numOfX;
//   int numOfO;
//   int res = -1;
//
//   // 读入矩阵
//   for (i = 0; i < size; i++) {
//       for (j = 0; j < size; j++) {
//           scanf("%d", &board[i][j]);
//       }
//   }
//
//   // 检查行
//   for (i = 0; i < size && res == -1; i++) {
//       numOfO = numOfX = 0;
//       for (j = 0; j < size;j++) {
//           if (board[i][j] == 1) {
//               numOfX++;
//           }
//           else {
//               numOfO++;
//           }
//       }
//       if (numOfO == size) {
//           res = 0;
//       }else if(numOfX == size){
//           res = 1;
//       }
//   }
//
//   // 检查列
//   if (res == -1) {
//       for (j = 0; j < size && res == -1;j++) {
//           numOfO = numOfX = 0;
//           for (i = 0; i < size; i++) {
//               if (board[i][j] == 1) {
//                   numOfX++;
//               }
//               else {
//                   numOfO++;
//               }
//           }
//           if (numOfO == size) {
//               res = 0;
//           }
//           else if (numOfX == size) {
//               res = 1;
//           }
//       }
//   }
//
//   return 0;
//}