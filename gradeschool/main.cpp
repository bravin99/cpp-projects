#include "grade_school.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

namespace grade_school
{
    const vector<string> empty_roster;

    void school::add(const string &name, int grade)
    {
        auto &students = students_by_grade[grade];
        const auto it = upper_bound(students.begin(), students.end(), name);
        students.insert(it, name);
    }

    const vector<string> &school::grade(int grade) const
    {
        try{
            const auto &students_in_grade = students_by_grade.at(grade);
            return students_in_grade;
        } catch (const out_of_range &e)
        {
            return empty_roster;
        }
    }

    const map<int, vector<std::string>> & school::roster() const
    {
        return students_by_grade;
    }

}


int main(int argc, char **argv) {
    return 0;
}
