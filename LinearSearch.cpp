#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "The element is found at index: ";
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the Element to be Searched: ";
    cin >> key;

    cout << LinearSearch(arr, n, key);
    return 0;
}

/*

input
Enter the size of the array: 5
Enter the Elements in the array: 2 50 40 10 5
Enter teh Element to be Searched: 40

output
The element is found at index: 2

*/