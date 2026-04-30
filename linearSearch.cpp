#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of index:"<<endl;
    cin>>n;
     int arr[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    int data,found=0;
    cout<<"Enter the data you want to found:"<<endl;
    cin>>data;
    for(int i=0;i<n;i++){
        if(arr[i]==data){
            cout<<"The data is found at "<<i<<" index"<<endl;
          found = 1;
           break;
        }
    }

    if(found==0){
        cout<<"The data is not found!"<<endl;
    }
    
   
    return 0;
}