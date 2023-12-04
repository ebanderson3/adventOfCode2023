#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;


int main() {

    ifstream in_file;
    in_file.open("input.txt");
    ofstream out_file;
    out_file.open("output.txt");
    string line;
    regex re("[^\\d]");

    int total = 0;

    while(getline(in_file, line)){
        
        string numbers = regex_replace(line, re, "");
    

        int num = (numbers.front() - '0') * 10 + (numbers.back() - '0');

        total += num;
        out_file << num << "\n";
    }

    cout << total;

    in_file.close();
    out_file.close();
}