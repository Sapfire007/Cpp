#include <iostream>

void iterativeWalk(int steps);
void recursiveWalk(int steps);
int iterativeFactorial(int num);
int recursiveFactorial(int num);

int main(){
    
    /*
    recursion = a programming technique where a function invokes itself
    from within 
    break a complex concept into a repeatable single step
    
    (iterative vs recursive)
    
    advantages = less code and is cleaner use for sorting and searching algorithms
    disadvantages = user more memory
    slower
    */
   
   iterativeWalk(100);
   std::cout << "=================================================" << '\n';
   recursiveWalk(100);
   std::cout << "=================================================" << '\n';
   
   std::cout << iterativeFactorial(10) << '\n';
   std::cout << recursiveFactorial(10) << '\n';
   
   return 0;
}

void iterativeWalk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You took a iterative step!" << '\n';
    }
}

void recursiveWalk(int steps){
    if(steps>0){
        std::cout << "You took a recursive step!" << '\n';
        recursiveWalk(steps-1);
    }
}

int iterativeFactorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}
int recursiveFactorial(int num){
    if(num>1){
        return num * recursiveFactorial(num-1);
    } else {
        return 1;
    }
}