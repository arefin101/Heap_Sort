#include <iostream>
using namespace std;

int Partition(int a[], int l, int h){

    int pivot = a[l];
    int i = l;
    int j = h;

    while(i<j){
        while(a[i] <= pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i<j){
            swap(a[i], a[j]);
        }
    }

    swap(a[l], a[j]);

    return j;

}

void QuickSort(int a[], int l, int h){

    if(l<h){
        int j= Partition(a, l, h);
        QuickSort(a, l, j);
        QuickSort(a, j+1, h);
    }

}

int main(){

    int a[]={3, 5, 6, 8, 9, 10, 15, 12, 16};

    int n = sizeof(a)/sizeof(a[0]);

    QuickSort(a, 0, n-1);

    for(int i = 0; i< n; i++){
        cout << a[i] << "  ";
    }

}
