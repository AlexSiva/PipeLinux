#include <unistd.h>
#include <iostream>

const std::string path[]{
    "../../A/cmake-build-debug/A",
    "../../P/cmake-build-debug/P",
    "../../M/cmake-build-debug/M",
    "../../S/cmake-build-debug/S"};

int main() {
  int pi[3], pid;
  for (int i = 0; i < 3; i++) {
    pipe(pi);
    pid = fork();
    if (!pid) {
      dup2(p[1], 1);
      system(path[i].c_str());
      exit(0);
    }
    dup2(p[0], 0);
    close(p[1]);
  }
  system(path[3].c_str());
  return 0;
}

