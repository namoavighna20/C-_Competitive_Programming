//------------------SELECTION SORT----------------------------//
//------------------TIME COMPLEXITY=> C(n)=O(n^2)------------//
#include<iostream>
using namespace std;
int main(){
    int n,temp,min;
    cout<<"How many numbers u want to insert:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value at index ["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"You entered following numbers:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
                                 // Selection Sort Coding//
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(i!=min){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    cout<<"Sorted array is:"<<endl;
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}