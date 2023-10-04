#include<iostream>
using namespace std;

int main() {
    int a[3], n, i;
    cout << "Enter the array elements:";
    for (i = 0; i < 3; i++) {
        cin >> a[i];
    }
    cout << "Your array elements are:";
    for (i = 0; i < 3; i++) {
        cout << "\n" << a[i] << "\n";
    }
    cout << "Which element from above array you want to search:";
    cin >> n;

    bool found = false;

    cout << "Your search element is found at positions/indices:";
    for (i = 0; i < 3; i++) {
        if (a[i] == n) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "Element not found";
    }

    return 0;
}
