#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
 string word;
cin >> word;
int y = 0;
for ( int i = 0; i < word.size(); i+= 2)
{
  if ( word [i] == '(' && word [i+1] == ')' )
  y = 1;
  else if ( word [i] == '[' && word [i+1] == ']' )
  y = 1;
  else if ( word [i] == '{' && word [i+1] == '}' )
  y = 1;
  else 
  y = 0;
}
if ( y == 1)
cout << "true";
else 
cout << "false";
    return 0;
}