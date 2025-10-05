#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcdef";

    cout << s.substr(2, 3) << endl;  // 输出：cde
    // 从下标2开始（a是0, b是1），取3个字符 -> "cde"

    cout << s.substr(4) << endl;     // 输出：ef
    // 从下标4开始，一直到结尾
}
