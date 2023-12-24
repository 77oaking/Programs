#include <bits/stdc++.h>

using namespace std;
class salary_info{
    int salary_per_hour;
    int total_yearly_salary;
};
class officers{
    string jobID;
    string name;
    int salary;
    int working_hour;
    int pph;
    char performance;
    salary_info sal;
public:
    void monthly_sal();
    void yearly_sal();
};
class financial_officer: public officers{
    int festival_bonus;

};
class   marketing_officers: public officers{
    int work_bonus;

};


int main()
{

    return 0;
}
