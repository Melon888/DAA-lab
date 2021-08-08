#include <iostream>
using namespace std;

int Binary(int *arr, int left, int right, int key)
{
    int mid = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid + 1;
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
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

        int t = 0;
        cin >> key;
        int ans =Binary(arr, t, n, key);
        
        if(ans==-1)
        cout<<"Not present "<<n;
        else
        cout<<"Present at "<<ans;

    }
    return 0;
}