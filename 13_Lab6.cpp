1.#include<iostream>
#include<conio.h>
using namespace std;

class student {
protected:
    int rollnum, m1, m2;
public:

    void get() {
        cout << "\nEnter the Roll no :";
        cin>>rollnum;
        cout << "Enter the two marks:";
        cin >> m1>>m2;
    }
};

class sports {
protected:
    int sports;
    
public:
    void getsports() {
        cout << "Enter the sports mark :";
        cin>>sports;

    }
};

class statement : public student, public sports {
    int total, avg;
public:

    void display() {
        total = (m1 + m2 + sports);
        avg = total / 3;
        cout << "\n\n\tRoll No : " << rollnum << "\n\tTotal : " << total;
        cout << "\n\tAverage : " << avg;
    }
};

main() {
    system("cls");
    statement obj;
    obj.get();
    obj.getsports();
    obj.display();
    getch();
}
2.#include <iostream>
#include <stdio.h>
using namespace std;
 
class basicInfo
{
    protected:  
        char name[35];
        int empId;
        char gender;
    public:
        void getBasicInfo(void)
        {
            cout << "Enter the Name: "; 
            cin.getline(name,35);
            cout << "Enter Employee Id: ";
            cin >> empId;
            cout << "Enter Gender: ";
            cin >> gender;
        }
};
 
class deptInfo
{
    protected:  
        char deptName[35];
        char assignedWork[35];
        int timetocomplete;
    public:
        void getDeptInfo(void)
        {
            cout << "Enter Department Name: ";
            cin >> deptName;
            cin.getline(deptName,35);
            cout << "Enter assigned work: ";
            cin >> assignedWork;
            cin.getline(assignedWork,35);
            cout << "Enter time in hours to complete work: ";
            cin >> timetocomplete;
        }
};
 
class employee: private basicInfo, private deptInfo
{
    public:
        void getEmpInfo(void){
            cout << "\tEnter Employee's basic info: " << endl;
            
            getBasicInfo();     
            cout << "\n\tEnter Employee's department info: " << endl;
            
            getDeptInfo();      
        }
        void printEmpInfo(void)
        {
            cout << "\n\n\tEmployee's Information is: " << endl;
            cout << "\nBasic Information of employee :" << endl;
            cout << "Name: " << name << endl;      
            cout << "Employee ID: " << empId << endl;       
            cout << "Gender: " << gender << endl << endl;
             
            cout << "Department Information :" << endl;
            cout << "Department Name: " << deptName << endl; 
            cout << "Assigned Work: " << assignedWork << endl; 
            cout << "Time to complete work: " << timetocomplete << endl;
        }
};
 
int main()
{
 employee emp;
    emp.getEmpInfo();
    emp.printEmpInfo();
    return 0;
}
