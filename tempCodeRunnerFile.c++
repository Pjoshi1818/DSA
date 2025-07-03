#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int main() {
    int arr[4] = {1, 2, 8, 3};
    int key = 9;
    int found = 0;
int main() {
    int arr[4] = {1, 2, 8, 3};
    int key = 9;
    int found = 0;

    for(int i = 0; i < 4; i++) {
        if (arr[i] == key) {
            cout << "Key is found: " << key << endl;
            found = 1;
            break;
        }
    }
    for(int i = 0; i < 4; i++) {
        if (arr[i] == key) {
            cout << "Key is found: " << key << endl;
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << "Key is not found." << endl;
    }
}



    if (!found) {
        cout << "Key is not found." << endl;
    }
}
