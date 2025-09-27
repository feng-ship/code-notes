#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;      // 定义字符串变量 s
    int ans = 0;   // 用来累计总长度

    // while(cin >> s) 表示：
    // 1. 从输入流里读一个字符串（空格/回车为分隔符）
    // 2. 如果读成功，条件为 true，进入循环
    // 3. 如果读失败（输入结束），条件为 false，退出循环
    while (cin >> s) {  
        ans += s.length();  // s.length() 返回当前字符串的长度
                            // 注意：s 每次都会被新输入覆盖
    }

    cout << ans << endl;  // 输出所有字符串长度的总和
    return 0;
}
// 这个程序会持续读取输入的字符串，直到输入结束（ Ctrl+D )，