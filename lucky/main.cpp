//
// Created by ghanem ghanem on 2021-03-06.
//
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::basic_string;
using namespace std;
void checkluck(string b) {
    int s = std::stoi(b);
    int arr[] = { 4,7,47,74,447,474,477 };
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrsize; i++) {
        if (s % arr[i] == 0) {
            cout << "YES";
            return;
        }
    }
    b = b.replace(b.begin(),b.end(), "4");
    b = b.replace(b.begin(),b.end() ,"7");
    if (b.length() == 0) {// we remove all iterations of 4 and 7 if there are still number left than that means it is not
        //a lucky number
        cout << "YES";
        return ;
    }
    else {
        cout << "NO";
    }
    return;
}
int main(){
    string n;
    cin >> n;
    checkluck(n);
    return 0;
}

