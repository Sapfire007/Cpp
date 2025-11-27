/*
Design an object-oriented system to represent individuals involved in different political roles by
creating a base class Politician containing common properties such as name, party, and
constituency, along with a virtual method serve(). From Politician, derive two specialized
subclasses: Minister, MemberOfParliament. Minister class which adds a portfolio property to
represent the department (e.g., Health, Education, Finance) under their governance, and
MemberOfParliament class which introduces a committee property representing the parliamentary
committee they are part of (e.g., Home Affairs, Defence, Transport). In each subclass, override the
serve() method to print a personalized message describing how that political representative
contributes to public service or governance in their specific role.
Sample output Message: "MP: name from: constituency, contributes through the: Committee"
*/

#include <iostream>
#include <string>
using namespace std;

class Politician {
    protected:
        string name;
        string party;
        string constituency;

    public:
        Politician(string n, string p, string c) {
            name = n;
            party = p;
            constituency = c;
        }

        // Virtual function for polymorphism
        virtual void serve() {
            cout << "Politician serves the public.\n";
        }
};

class Minister : public Politician {
    private:
        string portfolio;   // Health, Finance, Education, etc.

    public:
        Minister(string n, string p, string c, string port) : Politician(n, p, c) {
            portfolio = port;
        }

        void serve() override {
            cout << "Minister: " << name  << " from " << constituency  << ", governs the " << portfolio  << " department.\n";
        }
};

class MemberOfParliament : public Politician {
    private:
        string committee;   // Defence, Transport, etc.

    public:
        MemberOfParliament(string n, string p, string c, string comm) : Politician(n, p, c) {
            committee = comm;
        }

        void serve() override {
            cout << "MP: " << name  << " from " << constituency << ", contributes through the: "  << committee << " Committee.\n";
        }
};

int main() {
    Minister m("Rahul Verma", "ABC Party", "Delhi South", "Health");
    MemberOfParliament mp("Anita Rao", "XYZ Party", "Mumbai North", "Defence");

    // Polymorphic behavior
    Politician* p1 = &m;
    Politician* p2 = &mp;

    p1->serve();
    p2->serve();

    return 0;
}