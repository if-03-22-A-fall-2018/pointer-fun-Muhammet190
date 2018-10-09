#include <stdio.h>
void print_integers(int value, int* pointer);
void change_integers(int value, int* pointer);

int main(int argc, char const *argv[]) {
  int value = 17;
  int *pointer = &value;
  print_integers(value, pointer);
  change_integers(value,pointer);
  print_integers(value,pointer);
}
void print_integers(int value, int* pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d. \n\n",value, *pointer);

}

void change_integers(int value, int* pointer)
{
  value = 18;
  *pointer = value;
}
