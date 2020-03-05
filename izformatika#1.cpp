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
  
  int  check_sum = 999999; //просто большое число
  for(int l = 0 ; l < vct.size(); ++l)
  {
    for(int m = l+1 ; m < vct.size(); ++m)
    {
      int this_pair = vct[l] * vct[m];
      if( (this_pair < check_sum) && (this_pair % 6) ) //главное условие
        check_sum = this_pair;        
    }
  } 
  if(check_sum == 999999)
    cout << "FAIL";
  else 
    cout << check_sum;
  return 0;
}
