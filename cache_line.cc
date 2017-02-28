#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[]) {

  int k = stoi(argv[1]);
  int length = 64 * 1024 * 1024;
  int* arr = new int[length];

  // Loop 1
  for(int i=0; i<length; i+=k)
    arr[i] += 1;

  return 0;
}
