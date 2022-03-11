#include <cstdio>

int main() {
  double avo = 6.0221409e23;
  // `f` specifier for representation without scientific
  // notation, `e` for scientific notation, and `g` for
  // compiler's choice of the most compact representation.
  // `l` prefix for double, but can be omitted as floats
  // are promoted to double when using `printf()`.
  printf("Avogadro:\n%lf\n%le\n%lg\n", avo, avo, avo);
  float gol = 1.618034;
  printf("Golden Ratio:\n%f\n%e\n%g\n", gol, gol, gol);
  long double third = 0.333333333333333333L;
  // `L` prefix for long double.
  printf("Third:\n%Lf\n%Le\n%Lg\n", third, third, third);
}
