#include <iostream>
using namespace std;

void reverseString(string &s, int i, int j) {
    if(i >= j) return;
    swap(s[i], s[j]);
    reverseString(s, i+1, j-1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str, 0, str.length()-1);
    cout << "Reversed String = " << str << endl;
}
