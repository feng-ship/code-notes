#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. 定义和初始化
    string s1 = "hello";
    string s2("world");
    string s3;   // 空字符串

    cout << "s1: " << s1 << endl;  // hello
    cout << "s2: " << s2 << endl;  // world
    cout << "s3: " << s3 << endl;  // (空)

    // 2. 输入输出
    string name;
    cout << "请输入名字(遇到空格就停): ";
    cin >> name;  // cin 碰到空格、回车会停止
    cout << "你输入的是: " << name << endl;

    cin.ignore(); // 清空缓冲区的换行，避免影响 getline

    cout << "请输入一句话(可以有空格): ";
    getline(cin, s3); // getline 能读整行，包括空格
    cout << "整句话是: " << s3 << endl;

    // 3. 拼接
    string s4 = s1 + " " + s2;
    cout << "拼接结果: " << s4 << endl;  // hello world

    // 4. 长度
    cout << "s4 的长度: " << s4.length() << endl;

    // 5. 取字符（像数组下标）
    cout << "s4[0]: " << s4[0] << endl;     // h
    cout << "s4[6]: " << s4[6] << endl;     // w

    // 6. 遍历字符串
    cout << "遍历方式1: ";
    for (int i = 0; i < s4.length(); i++) {
        cout << s4[i] << " ";
    }
    cout << endl;

    cout << "遍历方式2: ";
    for (char c : s4) {
        cout << c << " ";
    }
    cout << endl;

    // 7. 修改字符
    s4[0] = 'H';  
    cout << "修改后: " << s4 << endl;  // Hello world

    // 8. 子串
    string sub = s4.substr(0, 5);  // 从 0 开始，取 5 个字符
    cout << "子串: " << sub << endl;  // Hello

    // 9. 查找
    int pos = s4.find("world");
    if (pos != string::npos) { // string::npos 表示“没找到”
        cout << "\"world\" 出现的位置: " << pos << endl;
    }

    // 10. 插入和删除
    s4.insert(5, ",");
    cout << "插入后: " << s4 << endl;  // Hello, world
    s4.erase(5, 1); // 从下标 5 开始，删 1 个字符
    cout << "删除后: " << s4 << endl;  // Hello world

    return 0;
}
