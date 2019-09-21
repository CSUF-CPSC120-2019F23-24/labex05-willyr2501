// Random Rectangle
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
  // limit has been set to be randomized
  int max = 40;
  int num;
  unsigned seed = time(0);
  srand(seed);
  num = rand() % max + 1;

  std::string rec ;
  rec.assign(num, '#');
  // Numbers are going to be randomized now

  std::cout << rec << std::endl;
  std::cout << rec << std::endl;
  std::cout << rec << std::endl;

  return 0;
}
