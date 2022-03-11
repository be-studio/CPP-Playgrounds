#include <cstdio>
#include <clocale>

int main() {
  // Need the following line to correctly output the
  // UTF-16 and UTF-32 characters below.
  setlocale(LC_CTYPE, "");
  /* Narrow Characters */
  char a = 'A';
  unsigned char b = 'B';
  signed char c = 'C';
  /* Wide Characters */
  char16_t omega = u'Ω';
  char32_t kannada8 = U'೮';
  wchar_t smiley = L'😁';
  /* Unicode Escape Characters */
  char aUnicode = '\u0041';
  char32_t smileyUnicode = U'\U0001f601';

  // The `char` type can be represented as an `int`, the
  // ASCII code for the character.
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  // Use the `%c` format specifier for `char` and `%lc` for
  // all other char types.
  printf("%c %lc %lc %lc\n", a, omega, kannada8, smiley);
  printf("%c %lc\n", aUnicode, smileyUnicode);
  putchar('\n');

  puts("SIZES OF CHAR TYPES IN BYTES");
  printf("char\t\t\t%ld\n", sizeof(char));
  printf("unsigned char\t%ld\n", sizeof(unsigned char));
  printf("signed char\t\t%ld\n", sizeof(signed char));
  printf("char16_t\t\t%ld\n", sizeof(char16_t));
  printf("char32_t\t\t%ld\n", sizeof(char32_t));
  printf("wchar_t\t\t\t%ld\n", sizeof(wchar_t));
}
