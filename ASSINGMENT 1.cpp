#include <iostream>
using namespace std;

int main() {
    int arr[6];  
    
    cout << "Enter 6 numbers:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    
    cout << "\nYou entered:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Element at index " << i << " = " << arr[i] << endl;
    }

    return 0;
}
