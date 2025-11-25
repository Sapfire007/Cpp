#include <iostream>
using namespace std;

// Template class with TWO type parameters
template <typename T, typename U>
class PairData {
private:
    T first;
    U second;

public:
    void setFirst(T x) {
        first = x;
    }

    void setSecond(U y) {
        second = y;
    }

    T getFirst() {
        return first;
    }

    U getSecond() {
        return second;
    }
};

int main() {

    // Example 1: int + double
    PairData<int, double> obj1;
    obj1.setFirst(10);
    obj1.setSecond(5.75);

    cout << "First (int): " << obj1.getFirst() << endl;
    cout << "Second (double): " << obj1.getSecond() << endl;
    cout << endl;

    // Example 2: char + string
    PairData<char, string> obj2;
    obj2.setFirst('A');
    obj2.setSecond("Apple");

    cout << "First (char): " << obj2.getFirst() << endl;
    cout << "Second (string): " << obj2.getSecond() << endl;
    cout << endl;

    // Example 3: double + int
    PairData<double, int> obj3;
    obj3.setFirst(3.1415);
    obj3.setSecond(42);

    cout << "First (double): " << obj3.getFirst() << endl;
    cout << "Second (int): " << obj3.getSecond() << endl;

    return 0;
}
