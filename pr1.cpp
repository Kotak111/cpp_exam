#include <iostream>
#include <string>

using namespace std;


class Book {
public:
    string title;
    string author;
    int publishedYear;

    
    Book(string t, string a, int y) : title(t), author(a), publishedYear(y) {}

   
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published Year: " << publishedYear << endl;
    }
};

int main() {
    
    Book books[] = {
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925),
        Book("1984", "George Orwell", 1949),
        Book("To Kill a Mockingbird", "Harper Lee", 1960)
    };

    
    int size = sizeof(books) / sizeof(books[0]);

    
    for (int i = 0; i < size; ++i) {
        cout << "Book " << i + 1 << " details:" << endl;
        books[i].display();
        cout << endl;
    }

    return 0;
}
