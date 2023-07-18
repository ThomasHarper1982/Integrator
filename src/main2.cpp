#include <iostream>
#include "equation_node.h"

using namespace std;


int main(int argc, char *argv[])
{
  try {
    std::cout << argv[0] << "\n";
    std::cout << argv[1] << "\n";

  } catch (exception &e) {
    cerr << e.what() << endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

