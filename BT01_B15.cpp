#include <iostream>
using namespace std;
string fibo(int n)
{
    string res;
    if (n == 0) res = "a";
    else if (n == 1) res = "b";
    else res = fibo(n-1) + fibo(n-2);
    return res;
}
int main()
{
    for (int i = 0; i <= 10; i++){
        cout << fibo(i) << endl;
    }
    return 0;
}

