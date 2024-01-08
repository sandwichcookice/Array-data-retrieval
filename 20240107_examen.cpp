#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float stock[][4] = {
        {20  , 21.2 , 19.8 , 20.6},
        {20.8, 20.9 , 20.3 , 20.4},
        {20.6, 21.5 , 19.8 , 20.2},
        {20.2, 20.6 , 20.1 , 20.2},
        {20.4, 21   , 19.5 , 19.5}
    };

    cout << "XX股價的記錄\n\n";
    cout << "開盤價  最高價  最低價  收盤價\n";

    //1.利用索引 + 索引 定位 
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0;i < 4;i++) {
            cout << stock[j][i] << "\t";
        }
        cout << "\n";
    }
    
    cout << "----------------------------(方法一)" << endl;

    //2.利用索引 + 偏移 定位
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0;i < 4;i++) {
            cout << *(stock[j] + i) << "\t";
        }
        cout << "\n";
    }
    
    cout << "----------------------------(方法二)" << endl;

    //3.利用指標 + 偏移 定位 
    for (int j = 0; j < 20; j+=4)
    {
        for (int i = 0;i < 4;i++) {
            cout << *(*stock + j + i) << "\t";
        }
        cout << "\n";
    }
    
    cout << "----------------------------(方法三)" << endl;

    //4.利用指標 + 指標 定位

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0;i < 4;i++) {
            cout << *(*(stock + j) + i) << "\t";
        }
        cout << "\n";
    }
    

    cout << "----------------------------(方法四)" << endl;

    //5.利用指標 + 索引 定位
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0;i < 4;i++) {
            cout << (*(stock + j))[i] << "\t";
        }
        cout << "\n";
    }
    
    cout << "----------------------------(方法五)" << endl;

    return 0;
}
