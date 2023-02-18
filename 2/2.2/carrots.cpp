#include <iostream>

int main(){
    using namespace std;

    // 声明一个整数的变量carrots
    int carrots;

    // 给carrots赋值
    carrots = 25;
    cout << "I hava ";
    cout << carrots;
    cout << "carrots.";
    cout << endl;
    // 修改carrots的值
    carrots = carrots - 1;
    //打印修改后的值
    cout << "Chrunch chrunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}