#include <iostream>

using namespace std;

/*---------------------------------------------------
WAP to reverse an array shown example as below:
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}
---------------------------------------------------*/

void reverseArray(int a[], int n)
{
    int temp =0;
    for (int i=0; i< (n/2); i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}
int main ()
{
    int size =0;
    cout <<" Enter an array size:";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array:\n";

    for (int i=0; i < size; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;

    }

    reverseArray (arr, size);

    cout << "reversed array:" << endl;
    for (int i=0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

}