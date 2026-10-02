#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, N, i;
    double P;

    cout << "k = ";
    cin >> k;

    cout << "N = ";
    cin >> N;

    // 1) while
    P = 1;
    i = k;

    while (i <= N)
    {
        P *= (pow(sin(1.0 * i), 2) +
            pow(cos(1.0 / i), 2)) / (1.0 * i * i);
        i++;
    }

    cout << P << endl;


    // 2) do...while
    P = 1;
    i = k;

    do
    {
        P *= (pow(sin(1.0 * i), 2) +
            pow(cos(1.0 / i), 2)) / (1.0 * i * i);
        i++;
    } while (i <= N);

    cout << P << endl;


    // 3) for (i++)
    P = 1;

    for (i = k; i <= N; i++)
    {
        P *= (pow(sin(1.0 * i), 2) +
            pow(cos(1.0 / i), 2)) / (1.0 * i * i);
    }

    cout << P << endl;


    // 4) for (i--)
    P = 1;

    for (i = N; i >= k; i--)
    {
        P *= (pow(sin(1.0 * i), 2) +
            pow(cos(1.0 / i), 2)) / (1.0 * i * i);
    }

    cout << P << endl;

    return 0;
}