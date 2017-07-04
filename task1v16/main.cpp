#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;


int main() {

    ifstream fin("file.txt");
    int MAX_LENGTH = 100;
    char line[MAX_LENGTH];
    int count = 0;
    while( fin.getline(line, MAX_LENGTH)){
        if(isdigit(line[0]))
            count++;
    }

    fin.close();
    cout << count;
    return 0;
}