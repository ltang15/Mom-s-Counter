/* 
 * Project: Mom's counter
 * Purpose: Create a class for this program. This program is used to count, reset based on the input.
            It report ERROR when the count exceeds the limit ( >9999)
 * Notes: Inputting the option in the menu.
*/
#include <iostream>
#include "MCounter.h"
void test_MCounter ();

int main() {
    cout << endl << endl;
    test_MCounter();
    cout << endl << endl << "=========END=========" << endl << endl;
    return 0;
}
void test_MCounter (){
    MCounter mom;
    char ans;
    bool done = false;
    int total = mom.count();

    cout << "|" << total << "|" << endl;

    // This loop is for running program
    do{
        cout << "[A] 1000  [S] 100   [D] 10   [F] 1    [R]eset   e[X]it" << endl;
        cin >> ans;

        switch (ans) {
            case 'A':
            case 'a': {
                //Adding 1000 to the total
                total = mom.add_1000();
                cout << "=========" << endl;
                    if (mom.is_error()){
                        cout << "ERROR" << endl;// print the ERROR when the counter exceeds the limit
                    }
                    else {
                        cout << "|" << total << "|" << endl;// print the total normally
                    }
                cout << "=========" << endl;
                break;
            }

            case 'S':
            case 's': {
                //Adding 100 to the total
                total = mom.add_100();
                cout << "=========" << endl;
                    if (mom.is_error()){
                        cout << "ERROR" << endl;
                    }
                    else {
                        cout << "|" << total << "|" << endl;
                    }
                cout << "=========" << endl;
                break;
            }

            case 'D':
            case 'd': {
                //Adding 10 to the total
                total = mom.add_10();
                cout << "=========" << endl;
                    if (mom.is_error()){
                        cout << "ERROR" << endl;
                    }
                    else {
                        cout << "|" << total << "|" << endl;
                    }
                cout << "=========" << endl;
                break;
            }

            case 'F':
            case 'f': {
                //Adding 1 to the total
                total = mom.add_1();
                cout << "=========" << endl;
                    if (mom.is_error()){
                        cout << "ERROR" << endl;
                    }
                    else {
                        cout << "|" << total << "|" << endl;
                    }
                cout << "=========" << endl;
                break;
            }
            case 'R':
            case 'r': {
                //resetting the total back to 0
                total = mom.reset();
                cout << "=========" << endl;
                cout << "|" << total << "|" << endl;
                cout << "=========" << endl;
                break;
            }
            case 'E':
            case 'e':
                // exit the program
                done = true;
                break;
        }

    }
    while (!done);

}
