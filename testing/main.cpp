#include <iostream>
#include <math.h>


using namespace std;

unsigned long int unhappyNumCount(int num)
{
    unsigned long int summ = 0,
                      unhappy = 0;
    while(num > 0){

        summ += num % 10;
        num /= 10;
    }
    if(summ % 2 != 0)
        unhappy++;

    return unhappy;
}

unsigned long int decToSis(int entered, int osnovanie = 2)
{
    int num = 0,
        razriad = 1;
    while (entered){
            num += entered % osnovanie * razriad;
            entered /= osnovanie;
            razriad *= 10;
    }
    return num;
}

int main()
{
    unsigned long int n = 10,
                      k = 3;
//    cout << "1 >= N <= 100, 1 >= K <= 9, K*N <= 300 \n\n enter N: ";
//    cin >> n;
//    cout << "enter K: ";
//    cin >> k;

    if( n < 1 || n > 100 ){
        cout << "error: N > 100 or N < 1";
        return 0;
    }
    if( k < 0 || k > 9 ){
        cout << "error: K < 0 or K > 9";
        return 0;
    }
    if( pow(k, n) > 4294967295 ){
        cout << "error: K^N longer then unsigned long int";
        return 0;
    }
    if( n * k > 300 ){
        cout << "error: K*N > 300 ";
        return 0;
    }

    int num = 0,
        j = 0;
/*    for (int i = 0; i < n; ++i) {//n

//        for (int j = 0; j <= k; ++j) {

//            cout << (num = j + i * 10)/*j*pow(i, k)) << endl;

//        }

//    }
//    int i = 0;
//    while(num < (pow(k, n))){

//    }*/
    while (num < pow(k, n)) {
//        int i = 0;
//        num += i;
//        if(i < k)
//            i++;
//        if (i = 3) {

//        }
        for (int i = 0; i < n; ++i) {


            for (int j = 0; j <= k; ++j) {
                cout << (num = i * j) << endl;
                if(j == k){
                    num += 7;
                }
                j++;
            }
        }
    }

//    int happy = unhappyNumCount(num);


    //cout << "happy cost: " << num << endl;

    return 0;
}

