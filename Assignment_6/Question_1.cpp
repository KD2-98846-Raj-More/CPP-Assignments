/*Q1. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class 
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books. 
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program 
should be menu driven and should not cause memory leakage. 
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]*/ 



#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
    int id;
    string title;
    double price;

public:
    Product() : id(0), title(""), price(0)
    {
    }

    Product(int id, string title, double price)
        : id(id), title(title), price(price)
    {
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setTitle(string title)
    {
        this->title = title;
    }

    void setPrice(double price)
    {
        this->price = price;
    }

    int getId()
    {
        return this->id;
    }

    string getTitle()
    {
        return this->title;
    }

    double getPrice()
    {
        return this->price;
    }

    virtual void accept()
    {
        cout<<"Enter ID: ";
        cin>>id;

        cout<<"Enter Title: ";
        cin>>title;

        cout<<"Enter Price: ";
        cin>>price;
    }

    virtual double calculatePrice() = 0;

    virtual void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
    }

    virtual ~Product()
    {
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book() : author("")
    {
    }

    Book(int id, string title, double price, string author)
        : Product(id, title, price), author(author)
    {
    }

    void setAuthor(string author)
    {
        this->author = author;
    }

    string getAuthor()
    {
        return this->author;
    }

    void accept()
    {
        Product::accept();

        cout<<"Enter Author: ";
        cin>>author;
    }

    double calculatePrice()
    {
        double discount;

        discount = getPrice() * 10 / 100;

        return getPrice() - discount;
    }

    void display()
    {
        Product::display();
        cout<<"Author: "<<author<<endl;
        cout<<"Final Price: "<<calculatePrice()<<endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape() : artist("")
    {
    }

    Tape(int id, string title, double price, string artist)
        : Product(id, title, price), artist(artist)
    {
    }

    void setArtist(string artist)
    {
        this->artist = artist;
    }

    string getArtist()
    {
        return this->artist;
    }

    void accept()
    {
        Product::accept();

        cout<<"Enter Artist: ";
        cin>>artist;
    }

    double calculatePrice()
    {
        double discount;

        discount = getPrice() * 5 / 100;

        return getPrice() - discount;
    }

    void display()
    {
        Product::display();
        cout<<"Artist: "<<artist<<endl;
        cout<<"Final Price: "<<calculatePrice()<<endl;
    }
};

int main()
{
    Product* arr[3];

    int choice;
    int i;
    double total = 0;

    for(i = 0; i < 3; i++)
    {
        cout<<"\n1. Book"<<endl;
        cout<<"2. Tape"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        if(choice == 1)
        {
            arr[i] = new Book();
        }
        else if(choice == 2)
        {
            arr[i] = new Tape();
        }
        else
        {
            cout<<"Invalid choice"<<endl;
            i--;
            continue;
        }

        arr[i]->accept();
    }

    cout<<"\n===== BILL ====="<<endl;

    for(i = 0; i < 3; i++)
    {
        cout<<"\nProduct "<<i + 1<<endl;

        arr[i]->display();

        total = total + arr[i]->calculatePrice();
    }

    cout<<"\nFinal Bill = "<<total<<endl;

    for(i = 0; i < 3; i++)
    {
        delete arr[i];
    }

    return 0;
}