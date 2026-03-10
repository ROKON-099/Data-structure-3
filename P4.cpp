#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the lenght of array:";
    cin >>n;
    cout << "Enter " <<n << " Number of array:";
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++)
    {

        int num=arr[i];
        int count =0;

        for (int j=1; j<=num; j++)
        {

            if (num % j == 0)
            {
                count ++;

            }
        }
        if (count ==2 )
        {
            cout << num << " is a prime number" <<endl;

        }
        else
        {
            cout << num << " is not a prime number" <<endl;

        }

    }

             return 0;



}
