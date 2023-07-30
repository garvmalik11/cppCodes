#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int pagecount = 0;
    int studentcount = 1;

    for (int i = 0; i < n; i++)
    {
        if (pagecount + arr[i] <= mid)
        {
            pagecount = pagecount + arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagecount = arr[i];
        }
    }
    return true;
}

int allocate(int arr[], int m, int n)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int m = 2;
    int n = 4;

    cout << allocate(arr, m, n) << endl;
}