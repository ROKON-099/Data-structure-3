#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter the size of array:";
cin >>n;
cout << "Enter " <<n << " Number of charrecter:";
char arr[n];
for (int i=0; i<n; i++)
{
    cin >> arr[i];
}
int vowel=0, consonant=0;
for (int i=0; i<n; i++)
{
    char ch=arr[i];

    if (ch>='A' && ch<='Z')
     ch=ch+32;

     if (ch>='a' && ch<='z')
     {
         if (ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u')
            vowel++;
         else consonant++;

     }
}

cout << "Vowels:" <<vowel <<endl;
cout << "Consonant:" <<consonant <<endl;

return 0;




}
