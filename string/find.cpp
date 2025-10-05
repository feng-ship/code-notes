#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello world";

    // 1️⃣ 查找字符 'o'
    size_t pos1 = s.find('o');  // 从头开始找第一个 'o'
    cout << pos1 << endl;       // 输出：4

    // 2️⃣ 查找子串 "world"
    size_t pos2 = s.find("world");  // 从头开始找子串 "world"
    cout << pos2 << endl;           // 输出：6

    // 3️⃣ 查找不存在的字符 'x'
    size_t pos3 = s.find('x');      // 'x' 不在字符串中
    cout << pos3 << endl;           // 输出：string::npos (很大的值)
    if (pos3 != string::npos)
        cout << "找到了" << endl;
    else
        cout << "没找到" << endl;  // 输出：没找到

    // 4️⃣ 从指定位置继续查找
    size_t firstL = s.find('l');             // 第一次出现 'l'
    size_t secondL = s.find('l', firstL+1);  // 从第一次出现后继续找
    cout << secondL << endl;                 // 输出：3 -> 9
}
//*size_t 类型：无符号整数 (unsigned int) 用途：表示 下标、长度、容器大小 保证不会出现负数;为什么 s.find() 返回 size_t：下标从 0 开始，不能为负;string::npos 是一个很大的无符号整数;用 int 接收可能溢出，不安全*//