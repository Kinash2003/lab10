#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

bool Find(ifstream& h) {
    char line[200];
    char r;
    while (h.getline(line, sizeof(line))) {
        int i = 0;
        char f = 0;
        do {
            r = line[i];
            if (i == 0 && r == 'a') return true;
            if (f == ' ' && r == 'a') return true;
            f = r;
            i++;
        } while (r != 0);
    }
    return false;
}

int main() {
    ifstream h("t.txt");
    bool found = Find(h);

    if (found) {
        cout << "Word starting with 'a' was found" << endl;
    }
    else {
        cout << "Word starting with 'a' was not found" << endl;
    }

    return 0;
}