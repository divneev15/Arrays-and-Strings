// Divneev Singh
// 24070123043
// Entc A2

#include <iostream>
using namespace std;

int main() {
    int array[5];
    int flag = 0;
    int search_element;

    cout << "Enter an Array of Five Numbers: \n";
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    cout << "\nEnter the Element You Want to Search: \n";
    cin >> search_element;

    for (int i = 0; i < 5; i++) {
        if (array[i] == search_element) {
            cout << "Element Found at Index " << i + 1 << "\n";  
            
            flag = 1;
            break; 
            
        }
    }

    cout << "\nThe Entered Array is: \n";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    if (flag == 0) {
        cout << "Element Not Found \n";
    }

    return 0;
}
/*outcome
Enter an Array of Five Numbers: 
5 7 2 3 9

Enter the Element You Want to Search: 
3
Element Found at Index 4

The Entered Array is: 
5 7 2 3 9 
  */
