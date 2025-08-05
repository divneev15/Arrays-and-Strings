/*
Divneev Singh 
24070123043
entc A2
*/

#include <iostream>
using namespace std;

int main() {
    int array[5];
    int n;

    cout << "Enter the Number of elements you want: \n";
cin>>n;
    cout << "Enter an Array of "<<n<<" Numbers: \n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max = array[0], min = array[0];  

    for (int i = 1; i < n; i++) {
        if (array[i] > max)
            max = array[i];

        if (array[i] < min)
            min = array[i];
    }
cout<<endl;
cout<<"the array provided is: \n";
 for (int i = 0; i < n; i++){
     cout<<array[i]<<" ";
 }
 cout<<endl;
    cout << "The Maximum Element of the Array is: " << max << "\n";
    cout << "The Minimum Element of the Array is: " << min << "\n";

    return 0;
}

/* OUTPUT

Enter the Number of elements you want: 
5
Enter an Array of 5 Numbers: 
3 6 9 2 10

the array provided is: 
3 6 9 2 10 
The Maximum Element of the Array is: 10
The Minimum Element of the Array is: 2

*/
