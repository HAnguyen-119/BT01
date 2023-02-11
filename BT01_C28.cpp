#include<iostream>
using namespace std;
int main()
{
    int hour = 0;
    while (hour < 24){
        if (hour == 0) cout << "12 midnight" << endl;
        else if (hour > 0 && hour < 12) cout << hour << "am" << endl;
        else if (hour == 12) cout << hour << " noon" << endl;
        else cout << hour % 12 << "pm" << endl;
        hour++;
    }
    return 0;
}
