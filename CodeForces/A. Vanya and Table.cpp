#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sum += (a - c - 1) * (b - d - 1);
    }
    
    cout << sum << endl;
    
    return 0;
}