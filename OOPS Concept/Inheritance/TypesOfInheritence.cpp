#include <iostream>
#include <string>
using namespace std;

// base class
class Employee
{
protected:
    // Attribute
    string name;
    int employeeId;

public:
    // Constructor
    Employee(const string &empName, int empId)
        : name(empName), employeeId(empId) // Initialization list
    {
        // cout << __FUNCTION__ << endl;
    }

    // Behaviour
    void display() const
    {
        cout << "Employee: " << name << "ID: " << employeeId << endl;
    }
};

class ProjectManager
{
protected:
    // Attribute
    string projectManaged;

public:
    ProjectManager(const string &project) : projectManaged(project) {}

    // Behaviour
    void manageProject() const
    {
        cout << "Project Manager managing project: " << projectManaged << endl;
    }
};

class TeamLead
{
protected:
    // Attribute
    int teamSize;

public:
    // Behaviour
    TeamLead(int size) : teamSize(size) {}

    void leadTeam() const
    {
        cout << "Team Lead leading a team of " << teamSize << " members." << endl;
    }
};

// Derived class for Single Inheritance
class Developer : public Employee
{
private:
    string programmingLanguage;

public:
    // Constructor
    Developer(const string &empName, int empId, const string &lang) // const compulsory
        : Employee(empName, empId), programmingLanguage(lang)
    {
        // this->programmingLanguage = lang; // is similar to above programmingLanguage(lang)
    }

    void show()
    {
        display();
        cout << "Specialization Developer, Programming Language: " << programmingLanguage << endl;
    }
};

// Derived class for Mutliple Inheritance
class TechLead : public Employee, public ProjectManager, public TeamLead
{
public:
    TechLead(const string &empName, int empId, const string &project, int teamSize)
        : Employee(empName, empId), ProjectManager(project), TeamLead(teamSize) {}

    void displayInfo() const
    {
        display();
        manageProject();
        leadTeam();
    }
};

// Base class for Multi-level Inheritence
class HRManager : public Employee
{
public:
    HRManager(const string &empName, int empId) : Employee(empName, empId)
    {
        cout << __FUNCTION__ << endl;
    }

    void handleHRDuties() const
    {
        cout << "HR Manager handling human resources duties" << endl;
    }
};

// Derived class for Multi-level Inheritence
class HRDirector : public HRManager
{
public:
    HRDirector(const string &empName, int empId) : HRManager(empName, empId)
    {
        cout << __FUNCTION__ << endl; // MACRO: to print function name
    }

    void managerHRDerpartment() const
    {
        cout << "HR Director managing the HR Department." << endl;
    }
};

// Base class for Hierarchical Inheritence
class Executive : public Employee
{
public:
    Executive (const string &empName, int empId) : Employee (empName, empId) {}

    void makeExecutiveDecisions() const
    {
        cout << "Executive making executive decisions." << endl;
    }
};

// Derived classes for Hierarchical Inheritence
class CEO : public Executive
{
public:
    CEO (const string &empName, int empId) : Executive(empName, empId) {}

    void leadCompany() const
    {
        makeExecutiveDecisions();
        cout << "CEO leading the company." << endl;
    }
};

int main()
{
    cout << endl;

    // Single Inheritance
    // Developer dev("Ramu Kakka", 101, "C++");
    // dev.show();

    // Multiple Inheritance
    // TechLead techLead("Teja Poosa", 101, "Project X", 5);
    // techLead.displayInfo();

    // Multi-level Inheritence
    // HRDirector hrdirector("Lucy Madam", 303);
    // hrdirector.handleHRDuties();
    // hrdirector.managerHRDerpartment();

    // Hierarchical Inheritence
    CEO ceo("Devi Lal", 404);
    ceo.leadCompany();


    cout << endl;

    return 0;
}