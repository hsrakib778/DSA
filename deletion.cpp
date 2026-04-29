#include<iostream>
using namespace std;
int main(){
    int a[50],size,pos;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    cout<<"Enter the elents of the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter the position you want to delete:"<<endl;
    cin>>pos;
    if(pos<0 || pos>=size){
        cout<<"Invalid position!"<<endl;
    }
    else{
        for(int i = pos-1;i<size-1;i++){
            a[i] = a[i+1];
        }
        size--;
    }

    cout<<"After deletion the array is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}