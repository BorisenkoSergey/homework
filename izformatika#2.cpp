#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vct;
  while(true)
  {
    int val;
    cin >> val;
    if(val == -9999)
      break;
    vct.push_back(val);
  }
  
return 0;
}
