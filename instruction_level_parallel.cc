#include<iostream>
#include<ctime>
using namespace std;
#define CLK_TCK  CLOCKS_PER_SEC

int main() {

  int length = 1024 * 1024 * 100;
  int* a = new int[2];
  int* b = new int[2];

  //int* c = new int[length];
  //int* d = new int[length];

  clock_t start, end;
  start = clock();

  for(int i=0; i<length; i++) {
    a[0] ++;
    a[0] ++;
  }

  end = clock();
  cout<<(double)(end-start)/CLK_TCK<<'\n';

  start = clock();
  for(int i=0; i<length; i++) {
    b[0] ++;
    b[1] ++;
  }
  
  end = clock();
  cout<<(double)(end-start)/CLK_TCK<<'\n';

  return 0;

}
