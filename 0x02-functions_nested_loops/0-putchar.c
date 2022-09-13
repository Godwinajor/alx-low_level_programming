#include "main.h"

/**

 *main - print out the appropriate characters

 *

 * Description: return the appropriate results

 *

 * Return: return integer if value=0

 *

 */

int main(void)
  
{
  
  int n = 0;
  
  char name[9] = "_putchar";
  

  
  while (n < 9)
    
    {
      
      _putchar(name[n]);
      
      n++;
      
    }
  
  _putchar('\n');
  
  return (0);
  
}
