#include <iostream>
#include <string>
using namespace std;

class   NumDaysDemoDemo{
private:
    double hours;
    double days;

public:
      NumDaysDemoDemo(double h = 0){
        hours = h;
        days = h/(8.00);
    }
    double getHours(){
        return hours;
    }
    double getDays(){
        return days;
    }
    void setHours(double h){
        hours = h;
        days = h/(8.00);
    }
    void setDays(double d){
        days = d;
        hours = d*(8.00);
    }
    double operator+ (const   NumDaysDemoDemo &right){
        return hours+right.hours;
    }
    double operator- (const   NumDaysDemoDemo &right){
        if(hours < right.hours){
            cout << "ERROR! Cannot subtract! Now terminating!\n";
            exit(0);
        }
        return hours-right.hours;
    }
      NumDaysDemoDemo operator++(){
        ++hours;
        days = hours/(8.00);
        return *this;
    }
      NumDaysDemoDemo operator++(int){
        hours++;
        days = hours/(8.00);
        return *this;
    }
      NumDaysDemoDemo operator--(){
        --hours;
        days = hours/(8.00);
        return *this;
    }
      NumDaysDemoDemo operator--(int){
        hours--;
        days = hours/(8.00);
        return *this;
    }
};

int main()
{
    cout << "Creating object with 12 hours...\n";
      NumDaysDemoDemo obj1(12);
    cout << obj1.getHours() << " hours = " <<obj1.getDays() << " days.\n";
    cout << "\nCreating object with 18 hours...\n";
      NumDaysDemoDemo obj2(18);
    cout << obj2.getHours() << " hours = " <<obj2.getDays() << " days.\n";
    cout << endl << "Adding hours... " << obj1 + obj2 << " hours.\n";
    cout << endl << "Subtracting hours... " << obj2 - obj1 << " hours.\n\n";
    cout << "Pre- and post-incrementing first object...\n";
    ++obj1;
    cout << obj1.getHours() << " hours = " <<obj1.getDays() << " days.\n";
    obj1++;
    cout << obj1.getHours() << " hours = " <<obj1.getDays() << " days.\n";
    cout << "\nPre- and post-decrementing second object...\n";
    --obj2;
    cout << obj2.getHours() << " hours = " <<obj2.getDays() << " days.\n";
    obj2--;
    cout << obj2.getHours() << " hours = " <<obj2.getDays() << " days.\n";
    return 0;
}

Question no 6