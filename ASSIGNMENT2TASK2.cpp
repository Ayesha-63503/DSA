#include <iostream>
using namespace std;

int main() {
   
    auto swap = [](int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    };

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swap(&x, &y); 

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}

