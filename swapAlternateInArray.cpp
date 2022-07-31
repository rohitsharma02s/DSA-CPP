#include <iostream>
using namespace std;

void printAnArray(int arr[], int count)
{
    cout<<"Resultant Array is :"<<endl;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
}

int swapAlternate(int arr[], int count)
{
    for (int i = 0; i < count; i += 2)
    {
        int j = i + 1;
        if (j < count)
        {
            swap(arr[i], arr[j]);
            cout << i << j << endl;
        }
    }
    printAnArray(arr, count);
}

int main()
{
    int count;
    cout << "Enter The no of elements in an array" << endl;
    cin >> count;
    int arr[50];
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    swapAlternate(arr, count);
    return 0;
}