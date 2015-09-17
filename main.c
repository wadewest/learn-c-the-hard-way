#include <stdio.h>

int main(int argc, char *argv[])
{
  fputs("This message is written to stderr.\n", stderr);
  puts("Hello World.");
  puts("puts is cool and all");
  puts("but not a lot it can do");
  fputs("other than write to streams\n", stdout);
  puts("for that it's great");
  return 0;
}
