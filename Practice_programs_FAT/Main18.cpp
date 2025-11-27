/*
A library wants to restrict direct access to its data for security reasons. Define a class Book with
private members title, author, and price. Provide public methods to read and display the book
details, and use protected members for inherited classes like EBook or Magazine. Demonstrate
how encapsulation ensures data protection while allowing controlled access.
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string title;
        string author;
        float price;

    protected:
        // Protected member accessible to child classes
        string category;

    public:
        void readData() {
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter Price: ";
            cin >> price;
            cin.ignore();
            category = "General Book";  // default
        }

        void display() {
            cout << "\n--- BOOK DETAILS ---\n";
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "Category: " << category << endl;
        }
};

class EBook : public Book {
    private:
        float fileSize;

    public:
        void readEBook() {
            readData();   // parent function
            cout << "Enter File Size (MB): ";
            cin >> fileSize;
            cin.ignore();

            category = "E-Book";   // accessing protected member
        }

        void displayEBook() {
            display();
            cout << "File Size: " << fileSize << " MB\n";
        }
};

class Magazine : public Book {
    private:
        int pages;

    public:
        void readMagazine() {
            readData();
            cout << "Enter Number of Pages: ";
            cin >> pages;
            cin.ignore();

            category = "Magazine";   // accessing protected member
        }

        void displayMagazine() {
            display();
            cout << "Pages: " << pages << endl;
        }
};

int main() {
    EBook e;
    Magazine m;

    cout << "Enter EBook Details:\n";
    e.readEBook();
    e.displayEBook();

    cout << "\nEnter Magazine Details:\n";
    m.readMagazine();
    m.displayMagazine();

    return 0;
}