#include<iostream>
using namespace std;

int BinarySearch(int arr[], int search, int L, int R)
{

    if (R >= L)
    {
        int midPosition = L + (R - L) / 2;

        if (arr[midPosition] == search)
            return midPosition;

        if (search < arr[midPosition])
            return BinarySearch(arr, search, L, midPosition - 1);

        return BinarySearch(arr, search, midPosition + 1, R);
    }

    return -1;
}

int main(void)
{
    int givenArray[] = {1, 5, 7, 8, 10, 20, 28, 30, 40, 43, 50, 55, 60};
    int search;

    cout<<"Enter a number to find: ";

    cin>>search;

    int size = sizeof(givenArray) / sizeof(givenArray[0]);

    int result = BinarySearch(givenArray, search, 0, size - 1);

    if (result != -1)
    {
        cout << "Element is found at position "<<result<<endl;
    }
    else
    {
        cout << "Element is not found"<<endl;
    }

    return 0;
}