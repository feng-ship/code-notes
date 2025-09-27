#include <stdio.h>

int main() {
    int n = 5;
    while (n--) { // 循环 n 次，每次 n 减 1，直到 0
        printf("n = %d\n", n);
    }
    return 0;
}

/*
知识点：
- while(n--) 循环相当于 while(n>0) { n--; }
- 常用于循环计数或打擂台
*/
