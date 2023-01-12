#include <iostream>
using namespace std;

int main() {
    int clicks = 0;
    char input;
    cout << "Welcome to the Clicker Game!" << endl;
    cout << "Press 'c' to click and 'q' to quit." << endl;

    while (input != 'q') {
        cin >> input;
        if (input == 'c') {
            clicks++;
            cout << "Clicks: " << clicks << endl;
        }
    }

    cout << "Thanks for playing! You made " << clicks << " clicks." << endl;
    return 0;
}
