#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers: ";
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int max_1 = a[0];
    int max_2 = INT_MIN;

    int idx1 = 0;       // largest index
    int idx2 = -1;      // second largest index (initially no index)

    for(int i=1;i<n;i++)
    {

        if(a[i] > max_1)
        {
            max_2 = max_1;     // পুরানো largest এখন second
            idx2 = idx1;       // পুরানো largest এর index second largest এ যাবে

            max_1 = a[i];      // নতুন largest
            idx1 = i;          // নতুন largest এর index
        }

        else if(a[i]>max_2 && a[i]<max_1)
        {
            max_2 = a[i];      // new second largest
            idx2 = i;          // তার index
        }
    }

    cout << "Maximum 1 is: " << max_1 << "index: " << idx1 << endl;
    cout << "Maximum 2 is: " << max_2 << "index: " << idx2 << endl;

    return 0;
}
