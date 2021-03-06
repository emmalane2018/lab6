#pragma once

#include <iostream>
#include <string>

// Forward declaration so that we can refer to Catalog
struct Catalog;

/* represents student object*/
struct Student
{
    // member variables
    int sid; // student id
    std::string name;
    int age;
    std::string major;
    bool has_not_graduated;

    // constructors
    Student(); // default constructor
    Student(std::string n, int a, std::string d, bool h = true);
    //note: bool h = true means default value is true, unless specified otherwise

    //function declarations
    void enroll_in_course(Catalog&, int cid);
    void receive_grade(Catalog&, int cid, int grade);
    double compute_gpa(const Catalog&);
    void change_major(std::string new_major);
};

//operator overloading
std::ostream& operator<<(std::ostream&, const Student&);

