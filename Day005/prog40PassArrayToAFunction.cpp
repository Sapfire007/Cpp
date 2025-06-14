#include <iostream>

double getTotal(double x[], int size);

int main(){
    double prices[] = {490.95, 47.99, 99.99, 50};
    int prices_size = (sizeof(prices)/sizeof(double));
    double total = getTotal(prices, prices_size);
    std::cout << "Total: " << total << '\n';
    return 0;
}

double getTotal(double x[], int size){
    double sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += x[i];
    }
    return sum;
}