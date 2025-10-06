#include <iostream>
#include <vector>   // 引入 vector 动态数组头文件
using namespace std;

int main() {
    // 🧸 1. 创建一个动态数组（可以理解成自动扩容的数组）
    vector<int> nums;   // 声明一个装 int 的 vector

    // 🧩 2. 用 push_back() 向数组末尾添加元素
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    // 🍬 3. 用范围 for 循环遍历 vector
    cout << "原始数组：";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    // 🌷 4. 用下标访问（像普通数组一样）
    cout << "第二个元素是：" << nums[1] << endl;

    // 🍀 5. 用 pop_back() 删除最后一个元素
    nums.pop_back();

    cout << "删除最后一个元素后：";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
