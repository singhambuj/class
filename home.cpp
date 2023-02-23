#include <iostream>
#include <fstream>
using namespace std;
class Home
{
public:
    void writeInHomeTxt(string date, string day, string subject, string joinedOrNot, string topic)
    {
        // TODO: write into text file

        //! Opening file
        ofstream HomeFile;
        HomeFile.open("home.txt");

        HomeFile << date << endl
                 << day << endl
                 << subject << endl
                 << joinedOrNot << endl
                 << topic << endl;

        //! Closing the file.
        HomeFile.close();
    }
};
int main()
{

    string date;
    cout << "Enter date [DD/MM/YYYY] : ";
    cin >> date;

    string day;
    cout << "Enter day: ";
    cin >> day;

    string subject;
    cout << "Enter subject: ";
    cin >> subject;

    string joinedOrNot;
    cout << "Did you join ? (Yes/No) : ";
    cin >> joinedOrNot;

    string topic;
    cout << "Enter topics: ";
    cin >> topic;
    Home home;
    home.writeInHomeTxt(date, day, subject, joinedOrNot, topic);

    // TODO: read and print starts from here.
    // string text;
    // ifstream readText("text.txt");
    // while (getline(readText, text))
    // {
    //     cout << text <<endl;
    // }
    // readText.close();
    return 0;
}