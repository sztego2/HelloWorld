#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<string> msg {"Hello","C++","World","from","VS Code","and the c++ extension!"};
    msg.push_back("Wow!!");
    int i = 0;
    for (const string& word : msg)
    {
        cout << word << "!!!!";
        i++;
    }
    cout << endl;
} 