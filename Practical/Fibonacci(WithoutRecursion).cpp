#include <iostream.h>
#include <conio.h>
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
void main()
{
    clrscr();
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    getch();
}
