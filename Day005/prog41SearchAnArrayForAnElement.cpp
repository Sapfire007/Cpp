#include <iostream> 

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = (sizeof(numbers)/sizeof(numbers[0]));
    int index;
    int myNum;

    std::cout << "Enter element to search for: ";
    std::cin >> myNum;

    for(int i = 0; i < size; i++){
        if(myNum == numbers[i]){
            std::cout << "Entered number " << myNum << " is found at index position: " << i << '\n';
            return 0;
        }
    }
    std::cout << "Entered number " << myNum << " is not present in the array." << '\n';
    return 0;
}