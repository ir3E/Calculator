#include <stdio.h>

int main() {
  char op, ans;
  double first, second;
  
  do{
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("\nEnter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op){
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
  printf ("\nDo you want to continue? y/n:");
  scanf (" %c", &ans);
  } while(ans == 'y'); 
  return 0;
}
