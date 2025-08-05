// Divneev Singh
// 24070123043
// Entc A2

#include <iostream>

using namespace std;

int main() {
    double array[5];
    double sum = 0;
    double avg = 0;
    int n;
    
cout << "Enter the Number of elements you want: \n";
cin>>n;
    cout << "Enter an Array of "<<n<<" Numbers: \n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
cout<<endl;
    cout << "the provided array is : ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
        sum += array[i]; 
    }
    
    cout << "\n";

    avg = sum / n;
cout<<endl;
    cout << "The sum of Array elements is " << sum << "\n";
    cout<<endl;
    cout << "The average of Array elements is " << avg << "\n";

    return 0;
}

/* OUTPUT
Enter the Number of elements you want: 
5
Enter an Array of 5 Numbers: 
2 5 8 3 1

the provided array is : 2 5 8 3 1 

The sum of Array elements is 19

The average of Array elements is 3.8

*/
