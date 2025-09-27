#include <stdio.h>

int main() {
    int n = 29;
    int flag = 1; // 1 表示是质数，0 表示不是

    if (n <= 1) flag = 0; // 1 和负数都不是质数
    for (int i = 2; i * i <= n; i++) { // 优化：只需到 sqrt(n),写sqrt(n)会是浮点运算
         // i * i <= n 避免浮点运算
        if (n % i == 0) {
            flag = 0;
            break;// 提前结束循环，在循环外继续做别的事
        }
    }

    if (flag) printf("%d 是质数\n", n);//if(flag) <=> if(flag != 0)
    else printf("%d 不是质数\n", n);

    return 0;
}

/*
输出结果：
29 是质数

理解：
1. 质数定义：只能被 1 和它本身整除
2. 检查有没有其他因子
3. break 提前结束，效率更高
*/