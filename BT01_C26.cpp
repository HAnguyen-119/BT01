#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double Mean = 0;
    int numbers[n];
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    int Min = numbers[0], Max = numbers[0];
    for (int i = 0; i < n; i++){
        Mean += (double)numbers[i] / n;
        if (numbers[i] < Min) Min = numbers[i];
        if (numbers[i] > Max) Max = numbers[i];
    }
    cout << "Mean: " << Mean << endl << "Max: " << Max << endl << "Min: " << Min;
	return 0;
}
