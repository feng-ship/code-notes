#include <iostream>
#include <string>
using namespace std;

int main() {
    // 直接赋值
    string a = "hello";

    // 构造函数
    string b("world");

    // 拷贝构造
    string c(b);

    // 重复字符
    string d(3, 'x');  // "xxx"

    // 临时对象
    cout << string("temp") << endl;

    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}