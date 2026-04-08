#include <iostream>
using namespace std;

int getMax(int *arr, int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int *arr, int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

void printingArray(int *arr, int size)
{
    cout << "Printing Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size, arr[100];
    cout << "Enter the size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value: ";
        cin >> arr[i];
    }

    printingArray(arr, size);
    cout << "The maximum value of an Array is " << getMax(arr, size) << endl;
    cout << "The minimum value of an Array is " << getMin(arr, size) << endl;
    return 0;
}