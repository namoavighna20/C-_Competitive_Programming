#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the number of elements:";
    cin>>n;
    int low=0,high=n-1;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value"<<" ["<<i<<"]:";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"The array of elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Bubble sorted elements are:"<<endl;
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}