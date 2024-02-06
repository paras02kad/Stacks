#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int indx =-1;
    
    arr[++indx]=2;
    cout<<arr[indx]<<endl;
    cout<<indx<<endl;
    indx++;
    cout<<indx<<endl;
return 0;
}