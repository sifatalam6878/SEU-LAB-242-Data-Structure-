#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    int max_1 = a[0];
    int max_2 = INT_MIN;
    for (int i = 1; i < n;i++)
    {
        if(a[i]>max_1)
        {
            max_2 = max_1;
            max_1 = a[i];
        }

        else if(a[i] > max_2 && a[i] <max_1)
        {
            max_2 = a[i];
        }
    }

    cout << "maximum_1 is: " << max_1 << endl;
    cout << "maximum_2 is: " << max_2 << endl;

    return 0;
}
