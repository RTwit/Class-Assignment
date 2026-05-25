//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
///**
// * @brief  埃氏筛法：生成 n 以内的所有素数
// * @param  n: 上界（包含 n 吗？代码中是 <=n，可按需修改）
// * @retval 无，结果直接打印在控制台
// */
//void sieve_of_eratosthenes(int n) {
//    if (n < 2) {
//        printf("没有素数（n 必须 ≥ 2）\n");
//        return;
//    }
//
//    // 步骤1：创建标记数组，初始全部标记为“是素数(true)”
//    bool* is_prime = (bool*)malloc((n + 1) * sizeof(bool));
//    if (is_prime == NULL) {
//        perror("内存分配失败");
//        exit(EXIT_FAILURE);
//    }
//
//    for (int i = 0; i <= n; i++) {
//        is_prime[i] = true;
//    }
//    is_prime[0] = is_prime[1] = false; // 0 和 1 不是素数
//
//    // 步骤2：筛法核心逻辑（和你给的步骤一一对应）
//    // 令 x 为 2，之后每次取下一个未被标记为非素数的数
//    for (int x = 2; x * x <= n; x++) {
//        if (is_prime[x]) { // 如果 x 没被标记，说明它是素数
//            // 将 2x, 3x, 4x... 直到 <=n 的数标记为非素数
//            for (int multiple = 2 * x; multiple <= n; multiple += x) {
//                is_prime[multiple] = false;
//            }
//        }
//    }
//
//    // 步骤3：输出所有素数
//    printf("%d 以内的素数有：\n", n);
//    int count = 0;
//    for (int i = 2; i <= n; i++) {
//        if (is_prime[i]) {
//            printf("%d ", i);
//            count++;
//            if (count % 10 == 0) printf("\n"); // 每10个换行，方便查看
//        }
//    }
//    printf("\n共有 %d 个素数\n", count);
//
//    free(is_prime); // 释放内存
//}
//
//int main() {
//    int n;
//    printf("请输入 n 的值：");
//    if (scanf("%d", &n) != 1) {
//        printf("输入错误！\n");
//        return 1;
//    }
//
//    sieve_of_eratosthenes(n);
//    return 0;
//}