#include <iostream>

using namespace std;

int main()
{
    int n = 0,
        k = 0;
    cout << "1 >= N <= 100, 1 >= K <= 9, K*N <= 300 \n\n enter N: ";
    cin >> n;
    cout << "enter K: ";
    cin >> k;

    if(n < 1 || n > 100){
        cout << "error: N > 100 or N < 1";
        return 0;
    }
    if(k < 0 || k > 9){
        cout << "error: K < 0 or K > 9";
        return 0;
    }
    if(n * k > 300){
        cout << "error: K*N > 300 ";
        return 0;
    }


//    while()


    cout << "n: " << n << " k: " << k << endl;

    return 0;
}

