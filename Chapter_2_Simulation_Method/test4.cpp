#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char n[101];
    int length;
    cin >> n;
    length = strlen(n);
    for (int i=0;i<length;i++)
    {
        if(n[i+1] >= '0' && n[i+1] <= '9')
        {
            for (char j='1';j<=n[i+1];j++)
            {
                cout << n[i];
            }
            i++;
        }
        else
        {
            cout << n[i];
        }
    }
    return 0;
}
