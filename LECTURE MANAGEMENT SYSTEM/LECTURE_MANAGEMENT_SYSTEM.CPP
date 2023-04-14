#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Lecture
{
public:
    string subject;
    string lecturer;
    int day;
    int time;

    Lecture(string subject, string lecturer, int day, int time)
    {
        this->subject = subject;
        this->lecturer = lecturer;
        this->day = day;
        this->time = time;
    }
};

class LectureManager
{
private:
    vector<Lecture> lectures;

public:
    void addLecture(Lecture lecture)
    {
        lectures.push_back(lecture);
        cout << "Lecture added successfully." << endl;
    }

    void listLectures()
    {
        if (lectures.size() == 0)
        {
            cout << "No lectures found." << endl;
        }
        else
        {
            cout << "Lecture List:" << endl;
            for (int i = 0; i < lectures.size(); i++)
            {
                Lecture lecture = lectures[i];
                cout << "Subject: " << lecture.subject << endl;
                cout << "Lecturer: " << lecture.lecturer << endl;
                cout << "Day: " << lecture.day << endl;
                cout << "Time: " << lecture.time << endl;
                cout << "---------------------------" << endl;
            }
        }
    }

    void searchLectures(string keyword)
    {
        vector<Lecture> results;
        for (int i = 0; i < lectures.size(); i++)
        {
            Lecture lecture = lectures[i];
            if (lecture.subject.find(keyword) != string::npos || lecture.lecturer.find(keyword) != string::npos)
            {
                results.push_back(lecture);
            }
        }

        if (results.size() == 0)
        {
            cout << "No lectures found." << endl;
        }
        else
        {
            cout << "Search Results:" << endl;
            for (int i = 0; i < results.size(); i++)
            {
                Lecture lecture = results[i];
                cout << "Subject: " << lecture.subject << endl;
                cout << "Lecturer: " << lecture.lecturer << endl;
                cout << "Day: " << lecture.day << endl;
                cout << "Time: " << lecture.time << endl;
                cout << "---------------------------" << endl;
            }
        }
    }
};

int main()
{
    LectureManager manager;

    // Add lectures
    manager.addLecture(Lecture("Math", "Karan Pareek", 1, 9));
    manager.addLecture(Lecture("Physics", "Pawan Pareek", 2, 11));

    // List all lectures
    manager.listLectures();

    // Search for lectures
    manager.searchLectures("Karan");

    return 0;
}