#include <conio.h>
#include <iostream.h>
#include <stdio.h>
void main()
{
    int a[4][4], b[4][4], j, k;
    clrscr();
    cout << "Enter Array Elements:";
    for (j = 0; j < 4; j++)
    {
        for (k = 0; k < 4; k++)
        {
            cin >> a[j][k];
        }
        cout << "\n";
    }
    for (j = 0; j < 4; j++)
    {
        for (k = 0; k < 4; k++)
        {
            b[j][k] = a[k][j];
            cout << b[j][k] << "\t";
        }
        cout << "\n";
    }
    getch();
}
