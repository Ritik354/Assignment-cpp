//book data store using structure cpp

#include <iostream>
#include <string.h>

using namespace std;

struct Book
{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    struct Book b1 ={1,"C",99.9};
    struct Book b2;
    b2.bookid = 2;
    strcpy(b2.title,"CPP");
    b2.price = 149.9;
    struct b3;
    b3= inputbook();
}