#include <iostream>
#include <random>
#include <time.h>

void normal_distribution_gen(double a[], int size, int mean, int variance){
  unsigned seed = (unsigned)time(NULL);
  std::default_random_engine gen(seed);
  std::normal_distribution<double> distribution(mean, variance);
  for(int i=0; i<size; i++)
    a[i] = distribution(gen);
}

int main(){
  int size;
  double mean, variance;
  std::cout << "Enter parameters with the order: size, mean, variance:" << std::endl;
  std::cin >> size >> mean >> variance;
  double a[size];
  normal_distribution_gen(a, size, mean, variance);
  for(int i=0; i<size; i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
  return 0;
}
