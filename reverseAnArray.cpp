#include <iostream>
using namespace std;

void printAnArray(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseAnArray(int arr[], int count)
{
    int first = 0;
    int last = count - 1;
    
        int temp;
        while (first < last)
        {
            // temp = arr[first];
            // arr[first] = arr[last];
            // arr[last] = temp;

            swap(arr[first],arr[last]);
            first++;
            last--;
        }
    cout<<"Reversed Array is :"<<endl;
    
    printAnArray(arr,count);
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
    reverseAnArray(arr, count);
    return 0;
}