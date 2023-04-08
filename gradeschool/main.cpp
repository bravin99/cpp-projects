#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

namespace grade_school
{
    using std::map;
    using std::string;
    using std::vector;
    class school
    {
        map<int, vector<string>> _roster;
    public:
        school() = default;

        map<int, vector<string>> roster() const
            { return _roster; }

        vector<string> grade(int g) const
        {
            auto f  = _roster.find(g);
            if  (f == _roster.end())
                return vector<string>();
            return f->second;
        }

        void add(std::string name, int grade)
        {
            _roster[grade].push_back(name);
            std::sort(_roster[grade].begin(),  _roster[grade].end());
        }
    };
}
int main(int argc, char **argv)
{
    using namespace grade_school;
    school blossom;
    blossom.add("Liam", 1);
    blossom.add("Hannah", 2);
    blossom.add("Brian", 2);
    blossom.add("Keith", 3);
    blossom.add("Anne", 3);
    blossom.add("Lucy", 3);

    auto our_roster = blossom.roster();
    for (auto const& [grade,  students] : our_roster)
    {
        std::cout<<"Grade "<<grade<<": "<<std::endl;
        for (auto const& student : students)
            std::cout<<" - "<<student<<std::endl;
    }

    auto grade_2_students = blossom.grade(2);
    std::cout<<"\nGrade 2 students: "<<std::endl;
    for (auto const& student : grade_2_students)
        std::cout<<" - "<<student<<std::endl;

    auto grade_3_students = blossom.grade(3);
    std::cout<<"\nGrade 3 students: "<<std::endl;
    for (auto const& student : grade_3_students)
        std::cout<<" - "<<student<<std::endl;

    return 0;
}
