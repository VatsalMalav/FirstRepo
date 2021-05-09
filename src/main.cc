// headers
#include <iostream>

// macros to check the os
// windows 👀
#ifdef _WIN32
#define OS "Windows"
#elif
// linux ✨
#ifdef __linux__
#define OS "Linux"
#endif

int main(void)
{
  // printing a message
  std::cout << "hello, world!" << std::endl;
  std::cout << "you're using: " << OS << std::endl;

  // exit code: 0
  return 0;
}
