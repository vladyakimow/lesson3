#include <iostream>
using namespace std;
 
int main()
{
  int k, i, N;

  cin >> N;
  
  k = 0;
 
  for(i=1; i<=N; i++)
  {
    if(N%i == 0)
    {
      k++;  
      
    }
  }
 
  cout << "Делителей натурального числа " << N << " - " << k;
 
  return 0;
}
