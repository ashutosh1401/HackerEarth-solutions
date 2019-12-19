#include <stdio.h>
 
#define SIZE ('z' - 'a')
 
int t, flag, letters[SIZE], *l;
 
char string[100000], *s;
 
int main()
{
    scanf("%d", &t);
 
    for (; t > 0; t--)
    {
   
 
        scanf("%s", string);
 
        for (s = string; *s != '\0'; s++)
        {
            letters[*s - 'a']++;
        }
 
    
 
        scanf("%s", string);
 
        for (s = string; *s != '\0'; s++)
        {
            letters[*s - 'a']--;
        }
 
 
 
        flag = 1;
 
        for (l = letters; l != letters + SIZE; l++)
        {
            if (*l != 0)
                flag = 0;
 
            *l = 0;
        }
 

 
        if (flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
 
    return 0;
}
