#include <iostream>
#include<string.h>
using namespace std;
class Person{
private:
    string name;
    int age;
protected:
    string gender;
public:
    Person(){
    name="N/A";
    age=0;
    }
    Person(int a,string n,string g){
        age=a;
        name=n;
        gender=g;
    }
        void setName(string n){
        name=n;
        }
        string getName(){
            return name;
        }
         void setAge(int a){
           age=a;
        }
        int getAge(){
            return age;
        }
        void setGender(string g){
        gender=g;
        }
        string getGender(){
        return gender;
        }
    void ShowPersonInfo(){
        cout<<"Person Name:"<<name<<endl;
        cout<<"Person Age:"<<age<<endl;
        cout<<"Person Gender:"<<gender<<endl;
    }
    ~Person(){
    cout<<"Person Destructor"<<endl;
    }
};
class Student:public Person{
private:
    int studentId;
protected:
    float cgpa;
public:
    string department;
 Student(){};
  Student(string name, int age,string gender, float Cg,string dpt,int stuId):Person(age,name,gender){
    cgpa=Cg;
    department=dpt;
    studentId=stuId;
}
void ShowStudentInfo(){
    ShowPersonInfo();
    cout<<"<STUDENT>"<<endl;
    cout<<"Id:"<<studentId<<endl;
    cout<<"Department:"<<department<<endl;
    cout<<"Cgpa:"<<cgpa<<endl;
}
~Student(){
cout<<"Student Destructor"<<endl;
}
};
class Teacher:public Person{
    private:
       double salary;
       int employeeId;
       string faculty;
    public:


        void setSalary(double s){
        salary=s;
        }
        double getSalary(){
            return salary;
        }
        void setEmployeeId(int id){
        employeeId=id;
        }
        int getEmployeeId(){
            return employeeId;
        }
        void setFaculty(string f){
            getline(cin,f);
        faculty=f;
        }
        string getFaculty(){
            return faculty;
        }
        void ShowTeacherInfo(){
            ShowPersonInfo();
            cout<<"<TEACHER>"<<endl;
            cout<<"Employee ID:"<<employeeId<<endl;
            cout<<"Salary:"<<salary<<endl;
            cout<<"Faculty:"<<faculty<<endl;
        }
        ~Teacher(){
            cout<<"Teacher Destructor"<<endl;
        }
};
class Officer:public Person{
    private:
int workingHour;
int overtime;

    public:
        double payment;
        Officer(){}
 Officer(string n, int age,string gender,int w, int o):Person(age,n,gender){
     workingHour=w;
     overtime=o;
}
 void setPayment(double p){
     payment=p;
}
double getPayment(){
    return payment;
}
void ShowOfficerInfo(){
    ShowPersonInfo();
    cout<<"<OFFICER>"<<endl;
    cout<<"Basic Payment:"<<getPayment()<<endl;
    cout<<"<Per Hour Overtime Payment: 2000 taka>"<<endl;
    cout<<"Overtime Payment:"<<overtime*2000<<endl;
    cout<<"Total Payment:"<<(getPayment()+(2000.0*overtime))<<endl;
}
~Officer(){
    cout<<"Officer Destructor"<<endl;
}

};

int main() {
     cout<<   "_____________________________________________________________________________________"<<endl;
        cout<<"|                                       PERSON CLASS                                |  "<<endl;
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
    Person p1;
    Teacher t1;

    string Sname;
    string Sdept;
    string Sgen;
    int stuID,Sage;
    float Scg;
    cout<<"\t\t Enter Student Name:";
    getline(cin,Sname);
    cout<<"\t\t Enter Student Age:";
    cin>>Sage;
    cout<<"\t\t Enter Student Gender:";
 cin>>Sgen;
    cout<<"\t\t Enter Student ID:";
    cin>>stuID;
    cout<<"\t\t Enter Student Department:";
   cin>>Sdept;
    cout<<"\t\t Enter Student Cgpa:";
    cin>>Scg;
 cout<<"\n\n\n";
    Student s1(Sname,Sage,Sgen,Scg,Sdept,stuID);
    s1.ShowStudentInfo();
    cout<<"\n\n\n";

    int Tid;
    string Tfac;
    double Tsal;
    string Tgen;
    string Tname;
    int Tage;

    cout<<"\t\tEnter Employee Name:";
    cin.ignore();
    getline(cin,Tname);
    cout<<"\t\tEnter Employee Age:";
    cin>>Tage;
    cout<<"\t\tEnter Employee Gender:";
    cin>>Tgen;
    cout<<"\t\tEnter Employee ID:";
    cin>>Tid;
    cout<<"\t\tEnter Salary:";
    cin>>Tsal;
    cout<<"\t\tEnter Faculty:";
    getline(cin,Tfac);
    cout<<"\n\n\n";
    t1.setName(Tname);
    t1.setAge(Tage);
    t1.setEmployeeId(Tid);
    t1.setSalary(Tsal);
    t1.setGender(Tgen);
    t1.setFaculty(Tfac);
    t1.ShowTeacherInfo();

    cout<<"\n\n\n";
    string Oname;
    int Oage;
    string Ogen;
     cout<<"\t\tEnter Officer Name:";
    getline(cin,Oname);
    cout<<"\t\tEnter Officer Age:";
    cin>>Oage;
    cout<<"\t\tEnter Officer Gender:";
 cin>>Ogen;
 int Oovertime;

 float Opay;
 cout<<"\t\tEnter Officer Over Time:";
 cin>>Oovertime;
 cout<<"\t\tEnter Officer Payment:";
 cin>>Opay;
 cout<<"\n\n\n";
 Officer o1(Oname,Oage,Ogen,8,Oovertime);
o1.setPayment(Opay);
o1.ShowOfficerInfo();
cout<<"\n\n\n";
  cout<<"_____________________________________________________________________________________"<<endl;

cout<<"\n\n\n";


    return 0;
}
