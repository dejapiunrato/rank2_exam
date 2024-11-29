/*
  Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int do_op(char *s1, char op, char *s2)
{
  int  num1;
  int  num2;
  int  result;

  num1 = atoi(s1);
  num2 = atoi(s2);

  if (op == '+')
    result = num1 + num2;
  else if (op == '-')
    result = num1 - num2;
  else if (op == '*')
    result = num1 * num2;
  else if (op == '/')
    result = num1 / num2;
  else if (op == '%')
    result = num1 % num2;
  printf("%d", result);
}

int  main(int argc, char **argv)
{
  if (argc == 4)
    printf("%d", do_op(argv[1], argv[2][0], argv[3]);
  write(1, "\n", 1);
  return (0);
}
