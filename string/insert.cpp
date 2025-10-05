#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    s.insert(5, "World"); // 在索引5插入 "World"
    cout << s << endl;
    return 0;
}
// 输出: HelloWorld(无空格)