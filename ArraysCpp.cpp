// buble sort and the find max and min number in array
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the size of array: ";
    cin >> num;
    // Declare an array
    int arr[num];
    // input element of array
    cout << "Enter the elements in array: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    // logic
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {

            // if arr[j]>arr[j+1] then swap the number
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        
    }
    cout << "Max number in array is: " << arr[num - 1] << endl;
        cout << "Min number in array is: " << arr[0];
    return 0;
}