#include <stdio.h>
#include <string.h>

int main() {
    char s[110] = "hello";  
    int cnt[26] = {0}; // cnt[0] 表示 a 的次数，cnt[1] 表示 b 的次数

    // strlen(s) 返回字符串长度，比如 "hello" 长度是 5
    for (int i = 0; i < strlen(s); i++) {
        cnt[s[i] - 'a']++; // 字母 - 'a' 得到对应下标
    }

    // 输出 h 出现了几次
    printf("h 出现了 %d 次\n", cnt['h' - 'a']);

    return 0;
}

/*
输出结果：
h 出现了 1 次

理解：
1. 字符长度：strlen("hello") = 5
2. 用字母 - 'a' 当数组下标，比如 'h' - 'a' = 7，对应 cnt[7]
3. cnt 数组就像一个“字母计数器”
*/