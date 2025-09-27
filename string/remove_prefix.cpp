#include <stdio.h>

int main() {
    char s[20];
    int a, b;
    fgets(s, sizeof(s), stdin);

    s[0] = ' '; // 替换首字母为空格
    sscanf(s, "%d %d", &a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

/*
知识点：
- 替换首字母为空格，方便 sscanf 忽略
- 常用处理每行前缀字母的题目
*/
