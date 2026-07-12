#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int numOfSem,totalCredits=0;
    int numOfCourses,creditHour;
    int i,j;
    float gradePoint,totalGradePoint=0,CGPA;
    string courseName;
    string studentName;
    cout << "Enter Student Name: ";
    getline(cin,studentName);
    cout<<"Enter the Number of Semester :";
    cin>> numOfSem;
    float semGPA[numOfSem];
    for(i=0;i<numOfSem;i++)
    {
        float semTotalGradePoint = 0;
         int semTotalCredits = 0;
        cout<<"=========Semester "<<i+1<<"=========\n";
        cout<<"\nEnter the Number Of Courses :";
        cin>>numOfCourses;
        for(j=0;j<numOfCourses;j++)
        {
            cout<<"\nEnter the Course name :";
            cin.ignore();
            getline(cin,courseName);
            cout<<"\nEnter the Grade Points :";
            cin>>gradePoint;
            cout<<"\nEnter the Credit Hours :";
            cin>>creditHour;
            totalGradePoint+=(gradePoint*creditHour);
            totalCredits+=creditHour;
            semTotalGradePoint += (gradePoint * creditHour);
            semTotalCredits += creditHour;
        }
         semGPA[i]=semTotalGradePoint / semTotalCredits;
    }
    CGPA=totalGradePoint/totalCredits;
    string overallGrade;
    if (CGPA >= 9.0)
    {
        overallGrade = "O";
    }
    else if (CGPA >= 8.0)
    {
        overallGrade = "A+";
    }
    else if (CGPA >= 7.0)
    {
        overallGrade = "A";
    }
    else if (CGPA >= 6.0)
    {
        overallGrade = "B+";
    }
    else if (CGPA >= 5.0)
    {
        overallGrade = "B"; 
    }
    else
    {
        overallGrade = "F";
    }
    cout<<"\n========CGPA CALCULATED========\n";
    cout<<"\nStudent Name :"<<studentName;
    cout<<fixed<<setprecision(2);
    for(i=0;i<numOfSem;i++)
    {
        cout<<"\nSemester "<<i+1<<" GPA : "<<semGPA[i]<<endl;
    }
    
    cout<<"\nCGPA : "<<CGPA;
    cout<<"\nOverall Grade : " << overallGrade;
    return 0;
}