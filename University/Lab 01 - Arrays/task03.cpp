/*Event Scheduling System*/

#include<iostream>
#include<string>
using namespace std;

string eventName[10] = {"Seminar", "Food Festival", "Concert", "Trade Show", "Birthday", "Workshop", "Wedding anniversary", "Graduation"};
string eventDate[10] = {"1-09-2024", "3-09-2024", "5-09-2024", "11-09-2024", "18-09-2024", "19-09-2024", "21-09-2024", "23-09-2024"};
int n = 10;

void insertEvent(string name, string date, int id){
    // first of all shifting
    for(int i = n-1; i > id;  i--){
        eventName[i] = eventName[i-1];
        eventDate[i] = eventDate[i-1];
    }

    // inserting
    eventName[id] = name;
    eventDate[id] = date;
}

void deleteEvent(int id){
    for(int i = id; i < n-1; i++){
        eventName[i] = eventName[i+1];
        eventDate[i] = eventDate[i+1];
    }

    eventName[n-1] = "";
    eventDate[n-1] = "";
}

int main(){
    cout << "Original Schedule: " << endl;
    cout << "Events: ";
    for(string s : eventName) cout << s << " | ";
    cout << "\nDates: ";
    for(string s : eventDate) cout << s << " | ";
    cout << endl;

    // a.	Insert a new event “Orientation” date: 10-09-2024
    insertEvent("Orientation", "10-09-2024", 3);

    cout << "\nAfter adding an Orientation: " << endl;
    cout << "Events: ";
    for(string s : eventName) cout << s << " | ";
    cout << "\nDates: ";
    for(string s : eventDate) cout << s << " | ";
    cout << endl;

    // b.	Delete the event of Trade Show from list.
    deleteEvent(4);
    cout << "\nAfter deleting Trade Show: " << endl;
    cout << "Events: ";
    for(string s : eventName) cout << s << " | ";
    cout << "\nDates: ";
    for(string s : eventDate) cout << s << " | ";
    cout << endl;
    
}