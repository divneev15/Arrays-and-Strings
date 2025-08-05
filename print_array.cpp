/* Divneev Singh
PRN 24070123043
ENTC A2 */

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"take array input from the user\n";
    int arr[5];
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe array is : ";
    for(n=0; n<5; n++)
    {
        cout<< arr[n]<<" ";
        
    }
}

/* output for this code
take array input from the user
1 2 3 4 5

The array is : 1 2 3 4 5
*/
