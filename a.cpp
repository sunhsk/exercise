#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
#include <cassert>
#include <numeric>
#include <string>
#include <stack>
#include <queue>
#include <unistd.h>
#include <unordered_map>
#include <mutex>
#include <netdb.h>
#include <arpa/inet.h>
std::mutex mtx;
using namespace std;
int main(int argc, char const *argv[])
{
    // const int x = 10;      // x 是常量，不能改
    // auto y = x;            // y 的类型被推导为 int（注意：没有 const！）
    // y = 20;
    // cout << &y << endl;
    // cout << &x << endl;
    const int x = 10;      // x 是常量，不能改
    auto &y = x;            // y 的类型被推导为 int（注意：没有 const！）
    cout << &y << endl;
    cout << &x << endl;
    return 0;
}
