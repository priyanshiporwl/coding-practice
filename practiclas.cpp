/*#include <iostream> 
using namespace std; 
class SwapDemo { 
public: 
void swapValues(int &x, int &y) { 
int temp = x; 
x = y; 
y = temp; 
} 
}; 
int main() { 
int a, b; 
cin >> a >> b; 
SwapDemo obj; 
obj.swapValues(a, b); 
cout << a << " " << b; 
return 0; 
}
#include <iostream> 
using namespace std; 
#define LARGEST(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c))
 
class LargestDemo { 
public: 
int findLargest(int x, int y, int z) { 
return LARGEST(x, y, z); 
} 
}; 
int main() { 
int x, y, z; 
cin >> x >> y >> z; 
LargestDemo obj; 
cout << obj.findLargest(x, y, z); 
return 0; 
}
#include <iostream> 
using namespace std; 
class DB; 
class DM { 
int m; 
float cm; 
public: 
void read() { cin >> m >> cm; } 
void display() { cout << m << " meters " << cm << " centimeters"; } 
friend class Distance; 
}; 
class DB { 
int feet; 
float inches; 
public: 
void read() { cin >> feet >> inches; } 
void display() { cout << feet << " feet " << inches << " inches"; } 
friend class Distance; 
}; 
class Distance { 
public: 
DM addDM(DM d1, DB d2) { 
float cm1 = d1.m * 100 + d1.cm; 
float cm2 = (d2.feet * 12 + d2.inches) * 2.54f; 
float total = cm1 + cm2; 
DM result; 
result.m = total / 100; 
result.cm = total - result.m * 100; 
return result; 
} 
}; 
int main() { return 0; } 
#include <iostream> 
#include <string> 
using namespace std; 
class BankAccount { 
string name; 
int accNo; 
string type; 
double balance; 
public: 
void assignInitialValues(string n, int a, string t, double b) { 
name = n; accNo = a; type = t; balance = b; 
} 
void deposit(double amt) { balance += amt; } 
void withdraw(double amt) { if (amt <= balance) balance -= amt; 
else cout << "Insufficient balance" << endl; } 
void display() { cout << name << " " << balance << endl; } 
}; 
int main() { 
BankAccount obj; 
obj.assignInitialValues("Rahul", 101, "Savings", 5000); 
obj.deposit(1000); 
obj.withdraw(2000); 
obj.display(); 
return 0; 
}
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    int accNo;
    string type;
    double balance;

public:
    // Function to assign initial values
    void assignInitialValues(string n, int a, string t, double b) {
        name = n;
        accNo = a;
        type = t;
        balance = b;
    }

    // Deposit function
    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Amount Deposited: " << amt << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amt) {
        if (amt <= balance && amt > 0) {
            balance -= amt;
            cout << "Amount Withdrawn: " << amt << endl;
        } else {
            cout << "Insufficient balance or invalid amount" << endl;
        }
    }

    // Display function
    void display() {
        cout << "\nAccount Details" << endl;
        cout << "Name           : " << name << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Account Type   : " << type << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {
    BankAccount obj;

    obj.assignInitialValues("Rahul", 101, "Savings", 5000);

    obj.deposit(1000);
    obj.withdraw(2000);

    obj.display();

    return 0;
}
#include <iostream> 
#include <string> 
using namespace std; 
class BankAccount { 
string name; 
int accNo; 
string type; 
double balance; 
public: 
BankAccount(string n, int a, string t, double b) { 
name = n; accNo = a; type = t; balance = b; 
} 
void display() { cout << name << " " << accNo << " " << type << " " 
<< balance << endl; } 
}; 
int main() { 
BankAccount obj("Aman", 202, "Current", 8000); 
obj.display(); 
return 0; 
} 
#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string author, title, publisher;
    float price;
    int stock;

public:
    // Function to get book details
    void getData() {
        cout << "Enter Author Name: ";
        cin >> author;

        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Publisher Name: ";
        cin >> publisher;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Stock: ";
        cin >> stock;
    }

    // Function to search book
    void search(string t, string a) {
        if (title == t && author == a)
            cout << "Book available" << endl;
        else
            cout << "Book not available" << endl;
    }

    // Function to purchase books
    void purchase(int copies) {
        if (copies <= stock) {
            cout << "Total cost: " << copies * price << endl;
            stock -= copies;
        }
        else {
            cout << "Required copies not in stock" << endl;
        }
    }
};

int main() {
    Book obj;

    obj.getData();

    // Example search
    obj.search("CPP", "Rahul");

    // Purchase 2 copies
    obj.purchase(2);

    return 0;
}
#include <iostream> 
#include <string> 
using namespace std; 
class BookShop { 
string author, title, publisher; 
float price; 
int stock; 
static int transactions; 
void updatePrice(float p) { price = p; } 
public: 
void getData() { cin >> author >> title >> publisher >> price >> 
stock; } 
void sell(int copies) { 
if (copies <= stock) { 
stock -= copies; 
transactions++; 
cout << "Total cost: " << copies * price << endl; 
} else { 
cout << "Required copies not in stock" << endl; 
} 
} 
void changePrice(float p) { updatePrice(p); } 
static void showTransactions() { cout << transactions << endl; } 
}; 
int BookShop::transactions = 0; 
int main() { 
BookShop obj; 
obj.getData(); 
obj.sell(2); 
return 0; 
} 
#include <iostream> 
using namespace std; 
class Complex { 
float real, imag; 
public: 
Complex(float r = 0, float i = 0) { real = r; imag = i; } 
Complex operator+(Complex c) { return Complex(real + c.real, imag + 
c.imag); } 
Complex operator-(Complex c) { return Complex(real - c.real, imag - 
c.imag); } 
void display() { cout << real << "+" << imag << "i" << endl; } 
}; 
int main() { 
Complex c1(2, 3), c2(1, 4), c3; 
c3 = c1 + c2; 
c3.display(); 
return 0; 
}
#include <iostream> 
using namespace std; 
class shape { 
protected: 
double x, y; 
public: 
void getData(double a, double b) { x = a; y = b; } 
virtual void displayArea() { } 
}; 
class triangle : public shape { 
public: 
void displayArea() { cout << 0.5 * x * y << endl; } 
}; 
class rectangle : public shape { 
public: 
void displayArea() { cout << x * y << endl; } 
}; 
int main() { 
triangle t; 
rectangle r; 
t.getData(10, 5); 
r.getData(10, 5); 
t.displayArea(); 
r.displayArea(); 
return 0; 
} 
#include <iostream> 
#include <string> 
using namespace std; 
class account { 
protected: 
string name; 
int accNo; 
string type; 
double balance; 
public: 
void accept(string n, int a, string t, double b) { name = n; accNo 
= a; type = t; balance = b; } 
void display() { cout << name << " " << balance << endl; } 
}; 
class savacct : public account { 
public: 
void deposit(double amt) { balance += amt; } 
void withdraw(double amt) { if (amt <= balance) balance -= amt; } 
void interest(double rate) { balance += balance * rate / 100; } 
}; 
class correct : public account { 
public: 
void deposit(double amt) { balance += amt; } 
void withdraw(double amt) { if (balance - amt >= 1000) balance -= 
amt; } 
void penalty() { if (balance < 1000) balance -= 100; } 
}; 
int main() { 
return 0; 
}*/
#include <iostream>
#include <string>

using namespace std;

// Base class
class account {
protected:
    string name;
    int accNo;
    string type;
    double balance;

public:
    void accept(string n, int a, string t, double b) {
        name = n;
        accNo = a;
        type = t;
        balance = b;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Savings Account Class
class savacct : public account {
public:
    void deposit(double amt) {
        balance += amt;
    }

    void withdraw(double amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance" << endl;
    }

    void interest(double rate) {
        balance += balance * rate / 100;
    }
};

// Current Account Class
class curracct : public account {
public:
    void deposit(double amt) {
        balance += amt;
    }

    void withdraw(double amt) {
        if (balance - amt >= 1000)
            balance -= amt;
        else
            cout << "Minimum balance must be maintained" << endl;
    }

    void penalty() {
        if (balance < 1000) {
            balance -= 100;
            cout << "Penalty imposed: 100" << endl;
        }
    }
};

int main() {

    // Savings Account Object
    savacct s;
    s.accept("Rahul", 101, "Savings", 5000);

    s.deposit(1000);
    s.withdraw(2000);
    s.interest(5);

    cout << "\nSavings Account Details:" << endl;
    s.display();

    // Current Account Object
    curracct c;
    c.accept("Aman", 102, "Current", 3000);

    c.withdraw(2500);
    c.penalty();

    cout << "\nCurrent Account Details:" << endl;
    c.display();

    return 0;
}
