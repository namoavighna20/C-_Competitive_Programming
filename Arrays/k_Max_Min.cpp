#include<iostream>
using namespace std;
int main(){
    int n,k,temp;
    cout<<"How many numbers u want to insert:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value"<<" "<<i+1<<":";
        cin>>a[i];
    }
    cout<<"Array of numbers are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   //Sorting in ascending order
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    cout<<"Enter the value of k:";
    cin>>k;
    cout<<"Output is:"<<a[k-1];

    return 0;
}