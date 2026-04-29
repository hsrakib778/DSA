#include<iostream>
using namespace std;
int main(){
    int arr[50],size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Ellements of the array are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}