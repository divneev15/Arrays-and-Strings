/* Divneev Singh
 24070123043
 Entc A2
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string c, d;

 
    cout << "Enter word to check for palindrome: \n";
    cin >> c;

    
    int i = c.length() - 1;
    while (i >= 0) {
        d += c[i];  
        i--;
    }

    if (d == c)
        cout << "The word is a Palindrome\n";
    else
        cout << "The word is NOT a Palindrome\n";

    return 0;
}

/* OUTPUT

Enter word to check for palindrome: 
naman
The word is a Palindrome
*/
