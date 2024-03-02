#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
 
vector <int> nums;
int count [101] = {0};
int x;
bool y = 0;
while ( cin >> x)
{
    nums.push_back(x);
    count [x]++;
}
for ( int i = 0; i < nums.size(); i++)
{
     if ( count [i] > 1)
     {
        y = 1;
        break;
     }
}
  if ( y == 1)
  cout << "true";
  else 
  cout << "false";

    return 0;
}