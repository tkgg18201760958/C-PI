# include <iostream>
# include <time.h>
# include <cmath>


using namespace std;


int main()
{
    // 记录初始时间
    time_t start, end;
    start = clock();



    // 初始化参数
    long double PI,error;
    long double sum = 0;

    // 开始计算
    for (int i = 1; i < 3039636; i++)
    {
        sum += 1/pow(i,2);
    }
    PI = sqrt(sum*6);
    cout << "PI = " << PI << endl;

    // 计算误差
    error = (fabs(PI - 3.14159265358979323846)/3.14159265358979323846)*100;
    cout << "error = " << error << '%' <<endl;




    // 记录结束时间
    end = clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC;
    cout << "time:" << elapsed_time << "s" << endl;

    return 0;   
}
/*
PI = 3.14159
error = 1e-05
time:0.037s
*/