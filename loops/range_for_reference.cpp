#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word="Hello";
    for (char &c:word)//c is a reference to each character in word;“&c”表示拿出“本体”
    {
        c='*';//修改本体
    }
    cout << word << endl;//输出：*****
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int nums[]={1,2,3};
    for (int x:nums)//x is a copy of each element in nums;“x”表示拿出“副本”
    {
        cout << x << endl;//输出：1 2 3
    } 
    //for (T x : arr) 是一种通用写法。表示：“对 arr 里的每个 T 类型的元素 x，做一件事。”