/*
Create a C++ program to manage a library system using constructors. Define a Book class with data
members title, author, and price. Implement a default constructor that sets default values and a
parameterized constructor to initialize specific book details. Add methods to display and update book
details, demonstrating constructor usage.
*/

#include <iostream>
using namespace std;

class Book {
    private:
        string title, author;
        float price;

    public:
        Book() {                       
            title = "NA";
            author = "NA";
            price = 0;
        }

        Book(string t, string a, float p) {   
            title = t;
            author = a;
            price = p;
        }

        void display() {
            cout << title << " | " << author << " | " << price << endl;
        }

        void update(string t, string a, float p) {
            title = t;
            author = a;
            price = p;
        }
};

int main() {
    Book b1;                      
    Book b2("C++", "Bjarne", 550); 

    cout << "Book Title | " << "Author | " << "Price" << endl;

    b1.display();
    b2.display();

    b1.update("DSA", "Karumanchi", 450);
    b1.display();

    return 0;
}