//--------------------Quick Sort-----//
//-----------Time Complexity-------//
//-----------Best Case: O(nlogn)---//
//-----------Worst Case: O(n^2)---//

#include<iostream>
using namespace std;


void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}

int partition(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    for(int j=first;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,last);
    return i+1;

}
void quicksort(int arr[],int first,int last){
    if(first<last){
        int pi=partition(arr,first,last);
        quicksort(arr,first,pi-1);
        quicksort(arr,pi+1,last);
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}