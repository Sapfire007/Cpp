#include <iostream>
using namespace std;

// --- Section 1: Initial Integer-Specific Max Function ---
int max_int(int x, int y) {
    return (x > y) ? x : y;
}

// --- Section 2: Overloaded Max Functions (Pre-Template Era) ---
double max_double(double x, double y) {
    return (x > y) ? x : y;
}

char max_char(char x, char y) {
    return (x > y) ? x : y;
}

// --- Section 3: Function Template with Single Type Parameter 'T' ---
template <typename T>
T max_template_single_type(T x, T y) {
    return (x > y) ? x : y;
}

// --- Section 4: Function Template with Mixed Type Parameters ---
template <typename T, typename U>
auto max_template_mixed_types(T x, U y) {
    return (x > y) ? x : y;
}

int main() {

    cout << "--- Using Initial Integer-Specific Max Function ---" << endl;
    cout << "Max of 1 and 2 (int): " << max_int(1, 2) << endl;
    cout << "Max of 1.1 and 2.1 (int function, problematic): "
         << max_int(1.1, 2.1) << endl;
    cout << endl;

    cout << "--- Using Overloaded Max Functions (Pre-Template) ---" << endl;
    cout << "Max of 1.1 and 2.1 (double overload): " << max_double(1.1, 2.1) << endl;
    cout << "Max of '1' and '2' (char overload): " << max_char('1', '2') << endl;
    cout << endl;

    cout << "--- Using Function Template with Single Type Parameter 'T' ---" << endl;
    cout << "Max of '1' and '2' (template): " 
         << max_template_single_type('1', '2') << endl;
    cout << "Max of 1.1 and 2.1 (template): "
         << max_template_single_type(1.1, 2.1) << endl;
    cout << "Max of 1 and 2 (template): "
         << max_template_single_type(1, 2) << endl;
    cout << endl;

    cout << "--- Using Function Template with Multiple Type Parameters (auto) ---" << endl;
    cout << "Max of 1 (int) and 2.1 (double): "
         << max_template_mixed_types(1, 2.1) << endl;
    cout << "Max of 5.5 (double) and 3 (int): "
         << max_template_mixed_types(5.5, 3) << endl;
    cout << "Max of 'a' (char) and 98 (int): "
         << max_template_mixed_types('a', 98) << endl;

    cout << endl;
    return 0;
}