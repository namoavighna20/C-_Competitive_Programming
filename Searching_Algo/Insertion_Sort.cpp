//------------------INSERTION  SORT----------------------------//
//------------------TIME COMPLEXITY=> C(n)=O(n^2)------------//
#include<iostream>
using namespace std;
int main(){
    int n,temp;
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
    // Insertion Sort//
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            else{
                break;
            }
        }
    }
    cout<<"Sorted Array is:"<<endl;
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}