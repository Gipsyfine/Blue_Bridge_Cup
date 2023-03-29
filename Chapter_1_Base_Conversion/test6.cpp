// 购物单（2017年试题A）
#include <iostream>
using namespace std;

float price[100];
int discount[100];

int main()
{
    int i;
    freopen("test6.txt", "r", stdin);
    i = 0;
    while(cin >> price[i] >> discount[i]) {
        i++;
    }
    i = 0;
    float sum = 0;
    while(price[i] != 0)
    {
        if(discount[i] < 10)
        {
            sum += price[i] * discount[i] / 10;
        }
        else
        {
            sum += price[i] * discount[i] / 100;
        }
        i++;
    }
    cout << (int)sum << endl;
    return 0;
}

// 答案：5136 
/*
注意：在使用F4运行时，结果为0，是因为
freopen() 函数的返回值为 FILE* 类型的指针，指向指定的文件流。
在这个例子中，freopen() 函数将标准输入流 stdin 重定向到文件 "test6.txt" 上，然后将该指针返回。
如果该函数执行成功，返回的指针将不为 0，否则返回 NULL（或者是 nullptr，取决于编译器的实现）。
因此，如果 freopen() 函数返回值为 0，说明该函数执行失败，即无法将标准输入流重定向到指定文件上。
在这种情况下，程序可能无法读取到正确的输入，导致程序出现错误或崩溃。
*/

// 使用Code_Runner运行结果：5136
