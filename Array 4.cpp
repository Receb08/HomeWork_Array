#include <iostream>
#include <cmath>
using namespace std;
double Eo(int a[], int n)
{
    double c = 0;
    for (int i = 0; i < n / 2; i++)
    {
        c = c + a[i];
    }
    return c / 10;
}

double Ho(int a[], int n)
{
    double h = 1;
    for (int i = n - 1; i >= n / 2; --i)
    {
        h = h * a[i];
    }
    return pow(h, 0.1);
}
int main()
{
    int n = 20, a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << Eo(a, n) << " " << Ho(a, n);
}