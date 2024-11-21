#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {

        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    cout << "Array size: ";
    int n;
    cin >> n;

    int arr[n];
    cout << "The element of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the key value to search: ";
    int key;
    cin >> key;

    int result = binarySearch(arr, n, key);
    if (result != -1)
    {
        cout << "The element is found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

/*
input

Array size: 5
The element of array: 12 14 90 100 110
Enter the key value to search: 90


output
The element is found at index: 2

*/