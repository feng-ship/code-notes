#include <stdio.h>

int main() {
    int a = 12, b = 34, c = a + b;
    char ans[20];
    sprintf(ans, "%d+%d=%d", a, b, c); // 将格式化结果写入 ans
    printf("%s\n", ans);
    return 0;
}

/*
知识点：
- sprintf 会把内容写入字符串，而不是打印
- printf(ans) 可以直接输出
- 常用于生成答案或调试输出
*/
