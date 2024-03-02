#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
 string word;
cin >> word;

for ( int i = 0; i < word.size(); i++)
{
    if (word [i] == word[i+1])
    {
        word [i] = 0;
        word [i+1] = 0;
    }
}

cout << word;
    return 0;
}