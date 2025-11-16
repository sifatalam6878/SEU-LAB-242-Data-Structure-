#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "How many Numbers: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    int maximum = a[0];

    for (int i = 0; i < n;i++)
    {
        if(a[i]>maximum)
        {
            maximum = a[i];
        }
    }

    cout << "Largest Maximum number is: " << maximum << endl;
    return 0;
}
