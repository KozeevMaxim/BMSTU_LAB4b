#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct student
{
    char first_name[64];
    char second_name[64];
    int age;
};

struct exam
{
    student stud;
    char exam_name[64];
};

int main(int argc, char* argv[])
{
    exam *P;
    unsigned int n;
    cout << "n = ";
    cin >> n;
    P = (exam *)malloc(n * sizeof(exam));
    for (unsigned int i = 0; i<n; i++)
    {
        cout << "Exam " << i + 1 << ": ";
        cin >> P[i].exam_name;
        cout << "First Name: ";
        cin >> P[i].stud.first_name;
        cout << "Second Name: ";
        cin >> P[i].stud.second_name;
        cout << "Age: ";
        cin >> P[i].stud.age;
    }

    for (int i = 0; i<n; i++)
        cout << P[i].exam_name << endl << P[i].stud.first_name << endl << P[i].stud.second_name << endl << P[i].stud.age << endl;

    unsigned int k = 0;
    for (unsigned int i = 0; i<n; i++)
        if (P[i].stud.age < 45) k++;
    if(k) cout << "Students with age < 45: " << k;
    else cout << "Not found";
    free(P);
    return 0;
}