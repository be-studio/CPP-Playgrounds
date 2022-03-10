#include <cstdio>

int main() {
  int a = 12345;
  short int b = -23456;
  long int c = -3456789L;
  long long int d = 426815897526991LL;

  printf("a = %d\n", a);
  printf("b = %hd\n", b);
  printf("c = %ld\n", c);
  printf("d = %lld\n", d);

  return 0;
}
