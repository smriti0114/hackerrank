#include <stdio.h>
int main()
{

    int n, t, sum;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {                    // 0<3 true         //1<3 true
        sum = 0;         // sum=0           //sum=0 as its other test case we need to reset the value
        scanf("%d", &n); // n=0   //n=1

        for (int j = 0; j <= n; j++)
        {                   // 0 <=0 true  // 0<=1 true 1<=1 true
            if (j % 2 == 0) // 0%2 ==0 true // 0%2 true goes to else as odd sum =1*2 sum becomes 2
                            // sum = 0+1 //sum =1  //sum =0+1
                sum = sum + 1;
            else
                sum = sum * 2;
        }
        printf("%d\n", sum); // 1 printed for first test case
    }
    return 0;
}