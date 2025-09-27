#include <stdio.h>

int main() {
    char s[] = " 12 34";
    int a, b;
    sscanf(s, "%d %d", &a, &b); // 从字符串中解析整数
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

/*
知识点：
- sscanf 用法：sscanf(字符串, "格式", &变量...)
- 可从一行字符串提取多个数据
*/
