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
  
  int check_sum = 0;
  for(int i = 0 ; i < vct.size(); ++i)
  {
    for(int m = i+1 ; m < vct.size(); ++m)
    {
      int this_pair = vctil] * vct[m];
      if( (this_pair >= 0) && ( (this_pair % 2) == 0) )
        check_sum++;
    }
  }

  cout << "result " << check_sum;
  
  
return 0;
}
