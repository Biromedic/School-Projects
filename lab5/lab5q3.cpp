#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class MyDate
{
public:
    int day;
    string month;
    int year;
};

class MyTime
{
public:
    int hour;
    int minute;
    int second;
};

void printDate(MyDate date, MyTime time) {
    cout << "Date: " << date.day << " " << date.month << " " << date.year << endl;
    cout << "Time: " << time.hour << ":" << time.minute << ":" << time.second << endl;
}

void printDate(MyDate date) {
    cout << "Date: " << date.day << " " << date.month << " " << date.year << endl;
}


int main(){
    
    time_t current_time = time(NULL);
    tm* timePtr = localtime(&current_time);

    int year = timePtr->tm_year+1900;// result will be 123 without +1900
    int month = timePtr->tm_mon;
    int day = timePtr->tm_mday; 

    int hour = timePtr->tm_hour;
    int minute = timePtr->tm_min;
    int second = timePtr->tm_sec;

    MyDate date = {day, "March", year};
    MyTime time = {hour, minute, second};

    printDate(date, time);
    printDate(date);
    return 0;
}