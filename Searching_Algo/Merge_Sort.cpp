//-----------Complexity of Merge Sort-------------//
//---------C(n)=O(nlogn)-----//
#include<iostream>
using namespace std;

void merge(int arr[],int first,int mid,int last){
    int n1=mid-first+1;
    int n2=last-mid;

    int a[n1];
    int b[n2]; //temp arrays

    for(int i=0;i<n1;i++){
        a[i]=arr[first+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=first;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[],int first,int last){
    if(first<last){
        int mid=(first+last)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);

        merge(arr,first,mid,last);

    }
}
int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}