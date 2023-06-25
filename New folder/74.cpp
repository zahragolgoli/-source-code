#include <iostream>
using namespace std;

const int NUM_DEPARTMENTS = 3;
const int NUM_CLASSES = 20;
const int NUM_STUDENTS = 50;

int main() {
    float grades[NUM_DEPARTMENTS][NUM_CLASSES][NUM_STUDENTS];

    // Read grades from user input
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        for (int j = 0; j < NUM_CLASSES; j++) {
            for (int k = 0; k < NUM_STUDENTS; k++) {
                cout << "Enter grade for department " << i+1 << ", class " << j+1 << ", student " << k+1 << ": ";
                cin >> grades[i][j][k];
            }
        }
    }

    // Calculate class averages
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        for (int j = 0; j < NUM_CLASSES; j++) {
            float class_sum = 0;
            for (int k = 0; k < NUM_STUDENTS; k++) {
                class_sum += grades[i][j][k];
            }
            float class_avg = class_sum / NUM_STUDENTS;
            cout << "Department " << i+1 << ", class " << j+1 << " average: " << class_avg << endl;
        }
    }

    // Calculate department averages
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        float dept_sum = 0;
        for (int j = 0; j < NUM_CLASSES; j++) {
            for (int k = 0; k < NUM_STUDENTS; k++) {
                dept_sum += grades[i][j][k];
            }
        }
        float dept_avg = dept_sum / (NUM_CLASSES * NUM_STUDENTS);
        cout << "Department " << i+1 << " average: " << dept_avg << endl;
    }

    // Calculate university average
    float univ_sum = 0;
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        for (int j = 0; j < NUM_CLASSES; j++) {
            for (int k = 0; k < NUM_STUDENTS; k++) {
                univ_sum += grades[i][j][k];
            }
        }
    }
    float univ_avg = univ_sum / (NUM_DEPARTMENTS * NUM_CLASSES * NUM_STUDENTS);
    cout << "University average: " << univ_avg << endl;

    return 0;
}