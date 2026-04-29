#include<iostream>
using namespace std;
int main(){
    int a[50];
    int size,num,pos;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    if(size>50){
        cout<<"Overflow condotion:"<<endl;
    }
    else{
        cout<<"Enter the elsements of array: "<<endl;
        for(int i=0;i<size;i++){
            cin>>a[i];
        }

        cout<<"Enter data that you want to insert:"<<endl;
        cin>>num;

        cout<<"Enter the position:"<<endl;
        cin>>pos;

        if(pos<0 || pos >=size+1){
            cout<<"Invalid position"<<endl;
        }
        else{
            for(int i=size-1;i>=pos-1;i--){
                a[i+1] = a[i];
            }
            a[pos-1] = num;
            size++;
        }
    }

    cout<<"The traversed array is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
