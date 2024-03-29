// 乘积尾零（2018年试题C）
#include <stdio.h>
//1.方法是把每个数都拆成2的m次方乘以5的n次方再乘以一个常数的形式.
//2.因为10=2*5,所有拆分的数有a个2和b个5（假设a>b),那么会有b个（2*5=10）.
//3.即尾数有b个0(假设a>b).
int main()
{
    int i=0,k,a=0,b=0;
    int q[100]={5650,4542, 3554, 473, 946, 4114 ,3871, 9073, 90, 4329,
                   2758, 7949, 6113, 5659, 5245, 7432, 3051, 4434, 6704, 3594,
                   9937, 1173, 6866, 3397, 4759, 7557 ,3070, 2287, 1453, 9899,
                   1486 ,5722, 3135, 1170, 4014, 5510, 5120, 729, 2880, 9019,
                   2049, 698, 4582, 4346, 4427, 646, 9742, 7340, 1230, 7683,
                   5693, 7015, 6887, 7381, 4172, 4341, 2909, 2027, 7355, 5649,
                   6701 ,6645, 1671, 5978, 2704, 9926, 295, 3125, 3878, 6785,
                   2066 ,4247, 4800, 1578, 6652, 4616, 1113, 6205, 3264, 2915,
                   3966 ,5291 ,2904 ,1285, 2193, 1428 ,2265 ,8730 ,9436, 7074,
                   689,5510 ,8243, 6114, 337, 4096, 8199 ,7313 ,3685, 211 };
    for(i=0;i<100;i++)
    {
        k=q[i];
        while(k%2==0)
        {
            a++;
            k/=2;
        }
        while(k%5==0)
        {
            b++;
            k/=5;
        }
    }
    if(a>b)
      printf("%d\n",b);
    else
      printf("%d\n",a);
    return 0;
}




// 这个解法意思是对的，但是是通过cin传入数据，不符合OJ的要求
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num,i=0,j=0;
//     int line;
//     cin >> line;
//     for(int k=0;k<line;k++)
//     {
//         do
//         {
//             cin >> num;
//             while(num%2==0)
//             {
//                 i++;
//                 num/=2;
//             }
//             while(num%5==0)
//             {
//                 j++;
//                 num/=5;
//             }
//         } while ((getchar()) != '\n');     
//     }
//     cout << min(i,j) << endl;
//     return 0;
// }

