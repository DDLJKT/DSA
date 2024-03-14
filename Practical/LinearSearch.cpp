#include <iostream.h>
#include <conio.h>
void main()
{
   clrscr();
   int array[5];
   int data;
   cout << "enter the array:";
   for (int k = 0; k < 5; k++)
   {
      cin >> array[k];
   }
   cout << "enter the data to search";
   cin >> data;
   for (int i = 0; i < 5; i++)
   {
      if (array[i] == data)
      {
         cout << "data found at position" << i + 1;
         break;
      }
      else
      {
         i = i + 1;
         if (i >= 5)
         {
            cout << "data not found";
         }
      }
   }
   getch();
}