#include <iostream>
using namespace std;

class shop
{
    int iemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter ID of your item no" << counter << endl;
    cin >> iemid[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price  of item with id " << iemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop s;

    s.initcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.displayprice();

    return 0;
}