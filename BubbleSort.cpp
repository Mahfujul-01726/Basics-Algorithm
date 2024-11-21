
#include <iostream>
using namespace std;

int main()
{
    cout << "Array size: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "The element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << "After sorting the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
input
Array size: 5
The element of array: 50 55 35 34 36

output
After sorting the elements of the array: 34 35 36 50 55


*/