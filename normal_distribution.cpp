#include <iostream>
#include <random>
#include <time.h>

void normal_distribution_gen(int a[], int size, int mean, int variance){
  unsigned seed = (unsigned)time(NULL);
  std::default_random_engine gen(seed);
  std::normal_distribution<double> distribution(mean, variance);
  for(int i=0; i<10; i++)
    a[i] = (int)distribution(gen);
}

int main(){
  int a[10];
  normal_distribution_gen(a, 10, 5, 2);
  for(int i=0; i<10; i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
  return 0;
}
