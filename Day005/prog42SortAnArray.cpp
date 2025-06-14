#include <iostream>

void sort(int arr[], int size);

int main(){
    // Bubble sort
    
    int a1[] = {10,1,9,2,8,3,7,4,6,5};
    int size = (sizeof(a1)/sizeof(int));
    
    sort(a1, size);

    for(int x : a1){
        std::cout << x << " ";
    }
    return 0;
}

void sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}