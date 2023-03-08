#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    int rollNumber;
    std::vector<std::string> lectures;
    double grade;
};

std::vector<Student> students; 

void addStudent()
{
    Student s;
    std::cout &#8203;
    oaicite: { "index" : 0, "invalid_reason" : "Malformed citation << \"Enter student name: \";\n  std::cin >>" }
    &#8203;
    s.name;
    std::cout &#8203;
    oaicite: { "index" : 1, "invalid_reason" : "Malformed citation << \"Enter student roll number: \";\n  std::cin >>" }
    &#8203;
    s.rollNumber;
    students.push_back(s);
    std::cout << "Student added successfully!" << std::endl;
}

void viewStudent()
{
    int rollNumber;
    std::cout &#8203;
    oaicite: { "index" : 2, "invalid_reason" : "Malformed citation << \"Enter student roll number: \";\n  std::cin >>" }
    &#8203;
    rollNumber;
    for (const Student &s : students)
    {
        if (s.rollNumber == rollNumber)
        {
            std::cout << "Name: " << s.name << std::endl;
            std::cout << "Roll Number: " << s.rollNumber << std::endl;
            std::cout << "Lectures: ";
            for (const std::string &lecture : s.lectures)
            {
                std::cout << lecture << " ";
            }
            std::cout << std::endl;
            std::cout << "Grade: " << s.grade << std::endl;
            return;
        }
    }
    std::cout << "Student not found." << std::endl;
}

int main()
{
    while (true)
    {
        std::cout << "1. Add Student" << std::endl;
        std::cout << "2. View Student" << std::endl;
        std::cout << "3. Exit" << std::endl;
        int option;
        std::cout &#8203;
        oaicite: { "index" : 3, "invalid_reason" : "Malformed citation << \"Enter option: \";\n    std::cin >>" }
        &#8203;
        option;
        switch (option)
        {
        case 1:
            addStudent();
            break;
        case 2:
            viewStudent();
            break;
        case 3:
            return 0;
        default:
            std::cout << "Invalid option." << std::endl;
            break;
        }
    }
    return 0;
}