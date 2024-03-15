#include <iostream.h>
#include <conio.h>

int main()
{
    int a[5], b[5], c[10], i;
    cout << "Enter the first array elements:";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter the second array elements:";
    for (i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    cout<<"\nThe merged array is:\n";
    int temp = 0;
    for (i = 0; i < 10; i++)
    {
        temp++;
        if (temp <= 5)
        {
            c[i] = a[i];
        }
        else
        {

            c[i] = b[i - 5];
        }
    }
    for (i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
