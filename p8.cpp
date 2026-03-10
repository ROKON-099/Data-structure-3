#include<iostream>
using namespace std;
int main()
{
    int n, factorial=1;
    cout << "Enter the size of array:";
    cin >>n;
    cout << "Enter " << " Number of array:";
    int arr[n], rev[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    cout << "factorial number is :";
    for (int i=n-1; i>=0; i--)
    {
        cout << arr[i];
        if (arr[i]>1)
            cout << "*";
            factorial*=arr[i];

    }
    cout << "=" << factorial <<endl;
    return 0;
}

