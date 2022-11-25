#include "Header.h"

int main()
{
     /*int k = 0;
     int size = 0;
     cout << " Veddit max cifru: ";
     cin >> k;
     cout << "Veddit kiko masiv: ";
     cin >> size;
     int* arr = new int[size];
     for (int i = 0; i < size; i++) {
         cout << "Veddit cifru" << i +1 << endl;
         cin >> arr[i];
         if (arr[i] > k) {
             cout << "NEA" << endl;
             i-=1;
         }
     }
     Countingsort(arr, k, size);
     Show(arr, size);
     cout << "Slava Ukraini";*/
   

     int d = 0;
     cout << "Veddit rozryadi :";
     cin >> d;
     int size;
     cout << "Veddit kiko masiv:";
     cin >> size;
     int* arr = new int[size];
     for (int i = 0; i < size; i++) {
         cout << "Veddit cifru " << i + 1 << endl;
         cin >> arr[i];
         if (Try(arr[i], d)) {
             continue;
         }
         else {
             cout << "Pomulka" << endl;
             i--;
         }
     }
     Radixsort(arr, size, d);
     Show(arr, size);
     cout << "Slava Ukraini";
}