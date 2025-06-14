#include <iostream>

int main() {

    /*
        switch = used to handle different letter grades (A-F)
                 and display a corresponding message
    */

    char grade;
    std::cout << "Enter your grade (A-F): ";
    std::cin >> grade;

    // Convert to uppercase to handle lowercase input too
    grade = toupper(grade);

    switch (grade) {
        case 'A':
            std::cout << "Excellent! Great job.";
            break;

        case 'B':
            std::cout << "Good work! Keep it up.";
            break;

        case 'C':
            std::cout << "Fair. You can do better.";
            break;

        case 'D':
            std::cout << "Needs improvement.";
            break;

        case 'E':
            std::cout << "Almost failing. Study harder.";
            break;

        case 'F':
            std::cout << "Failing. Better luck next time.";
            break;

        default:
            std::cout << "Invalid grade entered.";
            break;
    }

    return 0;
}