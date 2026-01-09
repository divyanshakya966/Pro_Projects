#include <iostream>
#include <conio.h>
using namespace std;

int PercentageCalc() {
    char choice;
    do {
        float arr[5];
        string sub[5] = {"Maths", "Hindi", "English", "Science", "Social"};
        cout << "\n";
        for (int i =0; i<5; i++) {
            cout << "Enter " << sub[i] << " subject's marks (Out of 100): ";
            cin >> arr[i];
        }
    
        float percentage = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
    
        cout << "\n========RESULTS========\n";
        for (int i =0; i<5; i++) {
            cout << "Marks in " << sub[i] << " : " << arr[i] << endl;
        }
        cout << "-----------------------" << "\n=> Total Marks: " << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) << "/500" << endl;
        cout << "=> PERCENTAGE: " << percentage << "%" << endl;
        cout << "-----------------------" << endl;
    
        cout << "\nGrades in each subject:\n";
        for (int i =0; i<5; i++) {
            if (arr[i] >= 90)
                cout << sub[i] << ": A+" << endl;
            else if (arr[i] >= 80)
                cout << sub[i] << ": A" << endl;
            else if (arr[i] >= 70)
                cout << sub[i] << ": B+" << endl;
            else if (arr[i] >= 60)
                cout << sub[i] << ": B" << endl;
            else if (arr[i] >= 50)
                cout << sub[i] << ": C" << endl;
            else
                cout << sub[i] << ": F" << endl;
        }
    
        cout << "-------------------" << "\n=> Overall Grade: ";
        if (percentage >= 90)
            cout << "A+" << endl;
        else if (percentage >= 80)
            cout << "A" << endl;
        else if (percentage >= 70)
            cout << "B+" << endl;
        else if (percentage >= 60)
            cout << "B" << endl;
        else if (percentage >= 50)
            cout << "C" << endl;
        else
            cout << "F" << endl;
        cout << "-------------------" << endl;

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

int main() {
    PercentageCalc();
    return 0;
}
