#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <chrono>
#include "DSStack_list.h"

using namespace std;

//professor said it was okay to put checkBrackets() above main()
int checkBrackets(char *file) //checks the file for stray or mismatched brackets using a list
{
    // create two stack array objects
    DSStack_list<char> brackets;
    DSStack_list<size_t> lineNumbers;

    // read in file
    ifstream file_input(file);

    // line buffer
    string line;

    if (!file_input.is_open())
    {
        cout << "Unable to open file!" << endl;
        return 1;
    }

    size_t lineNumber = 0;

    while (getline(file_input, line)) {
        size_t n = line.length();
        lineNumber++;
        for (size_t i = 0; i < n; ++i)
        {
            if((i < line.length() - 1) && line[i] == '/' && line[i+1] == '/') {
                break;
            }
            
            // push open brackets onto stack
            if (line[i] == '(' || line[i] == '{' || line[i] == '[') {
                brackets.push(line[i]);
                lineNumbers.push(lineNumber);
            }

            if((brackets.empty() && line[i] == ')') || (brackets.empty() && line[i] == ']') || (brackets.empty() && line[i] == '}')) {
                cerr << file << ": Stray closing bracket for " << line[i] << " in line number " << lineNumber << endl;
                return 1;
            }

            // if string read in is a close bracket, and if it matches with top value, pop the top value off
            if ((line[i] == ')' && brackets.top() == '(') || (line[i] == '}' && brackets.top() == '{') || (line[i] == ']' && brackets.top() == '[')) {
                brackets.pop();
                lineNumbers.pop();
            } else if((line[i] == ')' && brackets.top() != '(') || (line[i] == '}' && brackets.top() != '{') || (line[i] == ']' && brackets.top() != '[')) {
                cerr << file << ": Bracket mismatch detected for " << brackets.top() << " in line number " <<  lineNumbers.top() << " with " << line[i] << " in line number " << lineNumber << endl;
                return 1;
            }
        }
    }

        if(brackets.empty()) {
            cout << file << ": OK" << endl;
            return 0;
        } else {
            for(size_t i = 0; i < brackets.size(); ++i) {
                cerr << file << ": Bracket mismatch detected for " << brackets.top() << " in line number " << lineNumbers.top() << endl;
                brackets.pop();
                lineNumbers.pop();
            }
            return 1;
        }

    file_input.close();
}

// file names to check are passed on as command line arguments
int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "No extra command line argument passed other than program name." << endl;
    }
    else
    {
        auto start1 = chrono::high_resolution_clock::now();

        for(int i = 1; i < argc; ++i) { //time entire for loop and individual function calls
            auto start2 = chrono::high_resolution_clock::now();

            checkBrackets(argv[i]);

            auto stop2 = chrono::high_resolution_clock::now();
            auto duration2 = chrono::duration_cast<chrono::microseconds>(stop2 - start2);

            cout << "Checking " << argv[i] << " took " << duration2.count() << " milliseconds" << endl << endl;

            duration2 = std::chrono::milliseconds::zero();
        }
        
        auto stop1 = chrono::high_resolution_clock::now();

        auto duration1 = chrono::duration_cast<chrono::microseconds>(stop1 - start1);

        cout << "Checking all files, with for loop, took " << duration1.count() << " milliseconds" << endl << endl;

        duration1 = std::chrono::milliseconds::zero();
    }

}