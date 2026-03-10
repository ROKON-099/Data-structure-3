#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >>n;
    cout << "Enter " << " Number of array:";
    int arr[n], rev[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    for (int i=0; i<n; i++){

        rev[i]=arr[n-1-i];

    }
    cout << "Reversed array is :";
    for (int i=0; i<n; i++)
    {
        cout << rev[i] << " ";

    }

}





