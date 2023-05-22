#include "bits/stdc++.h"

using namespace std;

class Student{
private:
    string msv, name;
    double gpa;

public:
    Student() {
        msv = "";
        name = "";
        gpa =0;
    }
    Student(string msv_,string name_,double gpa_) {
        this->msv = msv_;
        this->name = name_;
        this->gpa = gpa_;
    }
    Student(string msv_,double gpa_ = 0.0) {
        this->msv = msv_;
        this->name = "";
    }
    // Getter methods
    string id() const {
        return msv;
    }
    string name() const {
        return name;
    }

    double grade() const {
        return gpa;
    }
    // Calculation method
    double cal_grade(double s1, double s2, double s3) {
        gpa = 0.1 * s1 + 0.3 * s2 + 0.6 * s3;
        return gpa;
    }

    // Comparison operators
    bool operator<(const Student& other) const {
        return gpa < other.gpa;
    }

    bool operator<=(const Student& other) const {
        return gpa <= other.gpa;
    }

    bool operator>(const Student& other) const {
        return gpa > other.gpa;
    }

    bool operator>=(const Student& other) const {
        return gpa >= other.gpa;
    }

    bool operator==(const Student& other) const {
        return gpa == other.gpa;
    }

    bool operator!=(const Student& other) const {
        return gpa != other.gpa;
    }

    // Output operator
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << student.msv << "_" << fixed << setprecision(1) << student.gpa;
        return os;
    }

};
int main() {

}

/*
#include <iostream>
#include <iomanip>
#include <string>

class Student {
private:
    std::string studentID;
    std::string fullName;
    double score;

public:
    // Constructors
    Student(const std::string& id, const std::string& name, double score)
        : studentID(id), fullName(name), score(score) {}

    explicit Student(const std::string& id)
        : Student(id, "", 0.0) {}

    // Getter methods
    std::string id() const {
        return studentID;
    }

    std::string name() const {
        return fullName;
    }

    double grade() const {
        return score;
    }

    // Calculation method
    double cal_grade(double s1, double s2, double s3) {
        score = 0.1 * s1 + 0.3 * s2 + 0.6 * s3;
        return score;
    }

    // Comparison operators
    bool operator<(const Student& other) const {
        return score < other.score;
    }

    bool operator<=(const Student& other) const {
        return score <= other.score;
    }

    bool operator>(const Student& other) const {
        return score > other.score;
    }

    bool operator>=(const Student& other) const {
        return score >= other.score;
    }

    bool operator==(const Student& other) const {
        return score == other.score;
    }

    bool operator!=(const Student& other) const {
        return score != other.score;
    }

    // Output operator
    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << student.studentID << "_" << std::fixed << std::setprecision(1) << student.score;
        return os;
    }
};

int main() {
    // Example usage
    Student student1("18020332", "John Doe", 8.5);
    std::cout << "Student 1: " << student1 << std::endl;

    Student student2("18020333");
    std::cout << "Student 2: " << student2 << std::endl;

    double s1 = 7.5, s2 = 9.0, s3 = 8.0;
    student2.cal_grade(s1, s2, s3);
    std::cout << "Student 2 (after calculating grade): " << student2 << std::endl;

    std::cout << "Student 1 name: " << student1.name() << std::endl;
    std::cout << "Student 2 grade: " << student2.grade() << std::endl;

    // Comparison example
    if (student1 > student2) {
        std::cout << "Student 1 has a higher score than Student 2" << std::endl;
    } else if (student1 < student2) {
        std::cout << "Student 1 has a lower score than Student 2" << std::endl;
    } else {
        std::cout << "Student 1 and Student 2 have the same score" << std::endl;
    }

    return 0;
}

*/