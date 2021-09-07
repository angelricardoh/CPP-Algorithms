#include <iostream>
#include <string>
using namespace std;

string StringChallenge(string str) {
  
    // code goes here 
    string firstTime;
    string secondTime;
    if (str[6] == '-') {
        firstTime = str.substr(0, 6);
        secondTime = str.substr(7, str.size());
    } else {
        firstTime = str.substr(0, 7);
        secondTime = str.substr(8, str.size());
    }

    int hours_1 = 0;
    int minutes_1 = 0;
    string clock_1;

    if (firstTime[1] == ':') {
        hours_1 = stoi(firstTime.substr(0, 1));
        minutes_1 = stoi(firstTime.substr(2, 4));
        clock_1 = firstTime.substr(4, 6);
    } else {
        hours_1 = stoi(firstTime.substr(0, 2));
        minutes_1 = stoi(firstTime.substr(3, 5));
        clock_1 = firstTime.substr(5, 7);
    }

    // cout << secondTime << endl;

    int hours_2 = 0;
    int minutes_2 = 0;
    string clock_2;
    if (secondTime[1] == ':') {
        hours_2 = stoi(secondTime.substr(0, 1));
        minutes_2 = stoi(secondTime.substr(2, 4));
        clock_2 = secondTime.substr(4, 6);
    } else {
        hours_2 = stoi(secondTime.substr(0, 2));
        minutes_2 = stoi(secondTime.substr(3, 5));
        clock_2 = secondTime.substr(5, 7);
    }

    int total_minutes = (hours_2 - hours_1) * 60;
    // cout << hours_2 << endl;
    // cout << total_minutes << endl;
    total_minutes += minutes_2 - minutes_1;

    if (clock_1 !=  clock_2) {
        total_minutes += 720;
    }
    if (total_minutes < 0) {
        total_minutes += 1440;
    }

    cout << total_minutes << endl;
    return str;

}

int main(void) { 
   
  // keep this function call here
    // output minute difference between two times 12:30pm and 12:00am

    // StringChallenge(coderbyteInternalStdinFunction(stdin));

    StringChallenge("12:30pm-12:00am");
    return 0;
}