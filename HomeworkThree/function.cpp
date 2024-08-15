#include <iostream>

using namespace std;

void swap(int* a, int* b) {
  
    int temp = *a;
 
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

  
    cout << "Enter the first value (x): ";
    cin >> x;
    cout << "Enter the second value (y): ";
    cin >> y;

  
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

   
    swap(&x, &y);

   
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}