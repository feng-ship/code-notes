#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    fgets(s, sizeof(s), stdin); // 读取整行，包括换行符
    s[strcspn(s, "\n")] = 0;    // 去掉末尾换行符
    printf("读取的字符串: %s\n", s);
    return 0;
}

/*
知识点：
- fgets 会读取整行，包括换行符
- strcspn(s,"\n") 用于去掉换行符
*/
