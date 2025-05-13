

#include<stdio.h>

int main()
{
    /*
    char str[10];
    fgets(str , 5,stdin); // gets() is dangereous to use because it take very space because 
                          // their is no limit but in fgets() their are limit
    puts(str);
    return 0;


*/

char *canChange ="hello world";
puts(canChange);

canChange ="hello";     // through pointer it is changeble
puts(canChange);


char canChange[] ="hello world";
puts(canChange);

canChange ="hello";   // through string it is not changed
puts(canChange);

return 0;

}