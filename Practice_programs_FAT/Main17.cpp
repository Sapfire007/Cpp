/*
Write a C++ program that simulates a simple library system. Define a LibraryBook class with
private data members: title, author, ISSN, and a static integer bookCount to track the number
of LibraryBook objects created. Define a LibraryAdmin class as a friend of LibraryBook,
allowing it access to private members through friend functions. The LibraryAdmin class should
include functions to:

a. Display details of the LibraryBook object, including the title, author, and ISSN.
b. Display the total number of LibraryBook objects created.
c. Modify the title, author, or ISSN of the LibraryBook.

Sample Output:
Library Book Details: Title: "The White Tiger", Author: "Aravind Adiga", ISSN: 1001-2345
Total number of LibraryBook objects: 2
Book details updated!
Library Book Details: Title: "The White Tiger - Special Edition", Author: "Aravind Adiga",
ISSN: 5432-1098
*/


#include <iostream>
#include <string>
using namespace std;

class LibraryAdmin; // Forward declaration

class LibraryBook {
    private:
        string title;
        string author;
        string ISSN;
        static int bookCount;   // Static variable to count books
    public:
        // Constructor
        LibraryBook(string t, string a, string i) {
            title = t;
            author = a;
            ISSN = i;
            bookCount++;        // Increase count when an object is created
        }

        // Declare LibraryAdmin as a friend class
        friend class LibraryAdmin;

        // Static function to return count
        static int getBookCount() {
            return bookCount;
        }
};

// Initialize static member
int LibraryBook::bookCount = 0;

class LibraryAdmin {
public:
    // a. Display details
    void displayDetails(LibraryBook &b) {
        cout << "Library Book Details: Title: \"" << b.title << "\", Author: \"" << b.author << "\", ISSN: " << b.ISSN << endl;
    }

    // b. Show total number of LibraryBook objects
    void showTotalBooks() {
        cout << "Total number of LibraryBook objects: " << LibraryBook::getBookCount() << endl;
    }

    // c. Modify book details
    void modifyBook(LibraryBook &b, string newTitle, string newAuthor, string newISSN) {
        b.title = newTitle;
        b.author = newAuthor;
        b.ISSN = newISSN;
        cout << "Book details updated!" << endl;
    }
};

int main() {
    LibraryBook b1("The White Tiger", "Aravind Adiga", "1001-2345");
    LibraryBook b2("Wings of Fire", "A.P.J. Abdul Kalam", "1111-2222");

    LibraryAdmin admin;

    admin.displayDetails(b1);
    admin.showTotalBooks();

    // Modify book 1
    admin.modifyBook(b1, "The White Tiger - Special Edition", "Aravind Adiga",  "5432-1098");

    admin.displayDetails(b1);

    return 0;
}