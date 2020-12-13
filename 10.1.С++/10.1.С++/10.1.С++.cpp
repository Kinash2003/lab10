#include <iostream>
#include <fstream>

using namespace std;

bool Find(ifstream& h);
bool Find(ifstream& h) {
    char p = 0;
    char f;
    while (h >> f) {
        if (f == 'a' && f == 'a') return true;
        if (f == 'b' && f == 'b') return true;
        if (f == 'c' && f == 'c') return true;

        p = f;
    }
    return false;
}
int main() {
    ifstream h("t.txt");
    if (!h) {
        cerr << "file \"t.txt\" not found" << endl;
        return 1;
    }

    bool found = Find(h);
    if (found) {
        cout << "'aa' or bb' or 'cc' found successfully" << endl;
    }
    else {
        cout << "'aa' or 'bb' or 'cc' NOT found" << endl;
    }

    h.close();

    return 0;
}

