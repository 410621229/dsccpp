#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
void bubble_sort(int a[]);

    void quick_sort(int a[], int start, int endd);
    void QS(int a[]);
    int partition(int a[], int start, int endd);

int main(){
    int a[10] = {5, 12, 3, 4, 6, 7, 1, 0, 3, 6};
    QS(a);
}
//OK
void bubble_sort(int a[]){
    int temp;
    for(int i = 0; i < 10; i++){
        for(int j = 9; j > i; j--){
            if(a[j] < a[j - 1]){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";
}

 int  partition(int a[], int start, int endd){
    int pivot = a[endd];
    int i = start - 1;
    int temp;
    for(int j = start; j < endd; j++){
        if(a[j] < pivot){
            i ++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    i ++ ;
    temp = a[i];
    a[i] = a[endd];
    a[endd] = temp;
    return i;
}
void quick_sort(int a[], int start, int endd){
    if(start < endd){
        int pivot = partition(a, start, endd);
        quick_sort(a, start, pivot-1);
        quick_sort(a, pivot+1, endd);
    }
}
void QS(int a[]){
    quick_sort(a,0,9);
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";
}

