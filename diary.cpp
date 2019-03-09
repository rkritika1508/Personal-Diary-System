#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;
int password();
void editpassword();
class record
{
    string date, day, time;
    string title;
    string note;
public:
    void addrecord(string);
    void viewrecord();
    void editrecord();
    void deleterecord();
};
int main()
{
//    This projects contains the following functions:
//    password() – contains/manages/handles password protection
//    addrecord() – to add new diary record
//    viewrecord() – to view added record in list
//    editrecord() – to modify and update an added record
//    editpassword() – to modify/change a password
//    deleterecord() – to delete or remove a record permanently from system file

    cout<<"WELCOME TO YOUR PERSONAL DIARY"<<endl;
    cout<<"What would you like to do?"<<endl;
    cout<<"Add Record               [1]"<<endl;
    cout<<"View Record              [2]"<<endl;
    cout<<"Edit Record              [3]"<<endl;
    cout<<"Delete Record            [4]"<<endl;
    cout<<"Edit Password            [5]"<<endl;
    cout<<"Exit                     [6]"<<endl;
    int input;
    cin>>input;
    record r;
    switch(input)
    {
    case 1:
        time_t now = time(0);
        char* dt = ctime(&now);
        string t(dt);
        r.addrecord(t);
        break;
    case 2:
        viewrecord();
        break;
    case 3:
        editrecord();
        break;
    case 4:
        deleterecord();
        break;
    case 5:
        editpassword();
        break;
    case 6:
        exit(0);
        break;
    }
    system("cls");
    return 0;
}
void record:: addrecord(string s)
{
    system("cls");
    ofstream file;
    cout<<"Enter the title"<<endl;
    getline(cin, title);
    file.open(title + ".txt");
    cout<<"Enter the note"<<endl;
    getline(cin, note);
    file<<note;
    file.close();
}
void record:: viewrecord()
{
    system("cls");
    int choice;
    cout<<"ENTER TITLE          [1]"<<endl;
    cout<<"ENTER DATE           [2]"<<endl;
    cin>>choice;
    if(choice==1)
    {

    }
}
void record:: editrecord()
{

}
void record:: deleterecord()
{

}
