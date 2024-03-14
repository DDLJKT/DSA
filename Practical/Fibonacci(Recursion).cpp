#include <iostream.h>
#include <conio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
void main()
{
    clrscr();
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    getch();