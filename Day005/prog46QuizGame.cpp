#include <iostream>

int main(){
    std::string qns[] = {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. What is the extension of a C++ source file?: ",
        "5. What does OOP stand for?: "
    };
    std::string options[][5] = {
        {"A. 1985", "B. 1995", "C. 1979", "D. 2000"},              
        {"A. Ritchie", "B. Gates", "C. Stroustrup", "D. Torvalds"}, 
        {"A. Java", "B. C", "C. Python", "D. Pascal"},          
        {"A. .cxx", "B. .cpp", "C. .txt", "D. .exe"},                    
        {"A. Object Oriented Programming", "B. Open Output Procedure", "C. Optional Override Paradigm", "D. Ordered Object Protocol"}
    };

    char answerKey[] = {'A', 'C', 'B', 'B', 'A'};

    int size = (sizeof(qns)/sizeof(std::string));
    char guess;
    int score = 0;

    for(int i = 0; i<size; i++){
        std::cout << "***************************************\n";
        std::cout << qns[i] << '\n';
        std::cout << "***************************************\n";
        for(int j = 0; j < (sizeof(options[i])/sizeof(options[i][0])); j++){
            std::cout << options[i][j] << '\n';
        }
        
        std::cout << ">>> Enter your preferred option: ";
        std::cin >> guess;
        guess = toupper(guess);
        
        while(guess < 'A' || guess > 'D'){
            std::cout << "Invalid input. Please enter A, B, C, or D: ";
            std::cin >> guess;
            guess = toupper(guess);
        }
        
        if(guess == answerKey[i]){
            std::cout << "CORRECT!\n";
            score++;
        }else{
            std::cout << "WRONG!\n";
            std::cout << "Correct Answer: " << answerKey[i] <<'\n';     
        }
    }
    
    std::cout << "***************************************\n";
    std::cout << "*               RESULTS               *\n";
    std::cout << "***************************************\n";
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "Number  of questions: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0;
}