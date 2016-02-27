#include <iostream>

using namespace std;

int unhappyNumCount(int num)
{
    int summ = 0,
        unhappy = 0;
    while(num > 0){

        summ += num % 10;
        num /= 10;
    }
    if(summ % 2 != 0)
        unhappy++;

    return unhappy;
}

int main()
{
    int n = 0,
        k = 0;
//    cout << "1 >= N <= 100, 1 >= K <= 9, K*N <= 300 \n\n enter N: ";
//    cin >> n;
//    cout << "enter K: ";
//    cin >> k;

//    if(n < 1 || n > 100){
//        cout << "error: N > 100 or N < 1";
//        return 0;
//    }
//    if(k < 0 || k > 9){
//        cout << "error: K < 0 or K > 9";
//        return 0;
//    }
//    if(n * k > 300){
//        cout << "error: K*N > 300 ";
//        return 0;
//    }
    int num = 45327;


    int happy = unhappyNumCount(num);


    cout << "happy cost: " << happy << endl;

    return 0;
}

