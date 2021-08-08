#include <iostream>
using namespace std;

void linear(int *arr, int n, int key)
{
    int i, j = 0;

    for (i = 0; i < n; ++i)
    {
        if (arr[i] == key)
        {
            cout << "Present at " << i + 1 << endl;
            j = 1;
            break;
        }
    }
    if (j == 0)
    {
        cout << "Not Present " << i << endl;
    }
}
int main()
{

    int t, n, key;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cin >> key;
        linear(arr, n, key);
    }
    return 0;
}