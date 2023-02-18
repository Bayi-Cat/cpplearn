#include <iostream>

int main() {
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    // 输入
    cin >> carrots;
    cout << "Here hava two more.";
    carrots = carrots + 2;
    // 输出增加过的carrots
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}