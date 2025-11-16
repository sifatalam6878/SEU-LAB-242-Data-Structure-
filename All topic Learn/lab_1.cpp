#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {10,5,20,15,30};
    int n = sizeof(arr)/sizeof (arr[0]);
    int maximum1 = arr[0],maximum2 = arr[0];
    int loc = 0;
     for(int i=1;i<n;i++)
     {

         if(arr[i] > maximum1)
         {

             maximum2 = maximum1;
             maximum1 = arr[i];
             loc = i;
         }
         else if(arr[i] > maximum2 && arr[i] < maximum1)
         {
             maximum2 = arr[i];
         }
     }

     cout << maximum1 << endl;
     cout << loc << endl;

     cout << maximum2 << endl;
}
