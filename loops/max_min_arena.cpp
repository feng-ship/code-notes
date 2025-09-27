#include <stdio.h>

int main() {
    int a[5] = {3, 9, 1, 7, 4};
    int maxx = a[0]; // 假设第一个是最大
    int minn = a[0]; // 假设第一个是最小

    for (int i = 1; i < 5; i++) {
        if (a[i] > maxx) maxx = a[i]; // 挑战最大值
        if (a[i] < minn) minn = a[i]; // 挑战最小值
    }

    printf("最大值 = %d, 最小值 = %d\n", maxx, minn);

    return 0;
}

/*
输出结果：
最大值 = 9, 最小值 = 1

理解：
1. 打擂台：先假设第一个是冠军
2. 逐个比较，遇到更强的就换下
3. 最后留下的就是最值
*/