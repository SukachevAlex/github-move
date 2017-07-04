#include <fstream>
#include <algorithm>
#include <sstream>
using namespace std;

bool isSame(const string& s)
{
    return count(s.begin(), s.end(), '(') == count(s.begin(), s.end(), ')');
}

string readFile(const string& fileName) {
    ifstream f(fileName);
    stringstream  ss;
    ss << f.rdbuf();
    return ss.str();
}

int main () {
    return isSame(readFile("file.txt")) ? true : false;
}