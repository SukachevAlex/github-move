#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;


int main() {

    ifstream fin("file.txt");
    int MAX_LENGTH = 100;
    char line[MAX_LENGTH];
    char temp[] = "  ";
    int count = 0;
    while( fin.getline(line, MAX_LENGTH) )
        if (strstr(line, temp))
            count++;
    fin.close();
    cout << count;
    return 0;
}