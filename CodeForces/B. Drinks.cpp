#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double tmp;
        cin >> tmp;
        sum += tmp;
    }
    
    cout << fixed << setprecision(8) << sum / n << endl;
    
    return 0;
}