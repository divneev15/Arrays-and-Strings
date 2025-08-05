/* Divneev Singh
 24070123043
 Entc A2
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cout << "Enter a string:\n";
    cin >> a;

    int i = a.length() - 1;
    while (i >= 0) {
        b += a[i];  
        i--;
    }

cout<<endl;
    cout << "You Entered String:\n" << a << "\n";
    cout << "The Reversed String is:\n" << b << "\n";

    return 0;
}

/* OUTPUT
Enter a string:
reverse

You Entered String:
reverse
The Reversed String is:
esrever
*/
