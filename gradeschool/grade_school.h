#ifndef GRADE_SCHOOL_H
#define GRADE_SCHOOL_H
#include <map>
#include <string>
#include <vector>

using namespace std;

namespace grade_school
{
    class school
    {
        map<int, vector<string>> students_by_grade;

    public:
        void add(const string &name, int grade);
        const vector<string> &grade(int grade) const;
        const map<int, vector<string>> &roster() const;
    };
}

#endif // GRADE_SCHOOL_H
