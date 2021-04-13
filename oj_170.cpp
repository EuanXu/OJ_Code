/*************************************************************************
	> File Name: oj_170.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jan 2021 07:30:20 PM CST
 ************************************************************************/
#include <iostream>
using namespace std;

void findSubString(string str) {
    cout << str.find("Ban_smoking") << endl;
}

void replaceAWithX (string str) {
    int pos;
    pos = str.find("Ban_smoking");
    while (pos != -1) {
        str.replace(pos, string("Ban_smoking").length(), "No_smoking");
        pos = str.find("Ban_smoking");
    }
    cout << str << endl;
}

int main() {
    char str[100][100000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }
    for (int i = 0; i < n; i++) {
        replaceAWithX(str[i]);
    }
    
    return 0;
}

