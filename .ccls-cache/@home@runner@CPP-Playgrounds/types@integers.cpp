#include <cstdio>

int main() {
  int a = 12345;
  short int b = -23456;
  // Optional suffix for long values is `L`.
  long int c = -3456789L;
  // Optional suffix for long long values is `LL`.
  long long int d = 426815897526991LL;

  printf("a = %d\n", a);
  printf("b = %hd\n", b);
  printf("c = %ld\n", c);
  printf("d = %lld\n", d);

  // Optional to add `U` suffix.
  unsigned int p = 98765U;
  unsigned short int q = 27654U;
  // The following value uses thousands separators,
  // which are ignored by the compiler.
  unsigned long int r = 5'427'942UL;
  unsigned long long int s = 75279954158853ULL;

  printf("p = %u\n", p);
  printf("q = %hu\n", q);
  printf("r = %lu\n", r);
  printf("s = %llu\n", s);

  // Prefix binary values with `0b`.
  // `int` can be omitted from type...
  unsigned short bin = 0b10010101;
  // Prefix octal values with `0`.
  int oct = 0347;
  // Prefix hexadecimal values with `0x`.
  // `int` can be omitted from type...
  long long hex = 0xffffffffffff;

  printf("bin in dec = %hu\n", bin);
  // Format specifier for octal is `%o`.
  printf("oct in oct = %o\n", oct);
  printf("oct in dec = %d\n", oct);
  // Format specifier for hexadecimal is `%x`.
  printf("hex in hex = %llx\n", hex);
  printf("hex in dec = %lld\n", hex);
  
  return 0;
}
