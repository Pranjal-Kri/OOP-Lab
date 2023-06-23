//Write a C++ program to implement a class which accepts date in different formats (using constructor overloading).
#include <iostream>
#include <cstdio>
using namespace std;
class dates
{
    int dd, mm, yy;

public:
    dates()
    {
        cout << "Default date: 1/12/2012 \n";
    }
    dates(char *d)
    {
        scanf("%d%d%d", &dd, &mm, &yy);
    }
    dates(int m, int d, int y)
    {
        dd = d;
        mm = m;
        yy = y;
    }
    void display()
    {
        cout << "Date is: \n";
        cout << dd << "/" << mm << "/" << yy << "\n";
    }
};
int main()
{
    int m, d, y;
    cout << "Enter date,month and year \n";
    cin >> d >> m >> y;
    cout << "Enter date,month & year in a single line \n";
    dates b("m"), c(m, d, y), a;
    c.display();
    b.display();
    return 0;
}