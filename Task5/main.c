//
//  main.c
//  Task5
//
//  Created by Pavel iPro on 21.12.2023.
//

/* Задача 1
 #include <stdio.h>
 unsigned long long int get_grains(int n)
 {
 unsigned long long res = 1;
 for (int i = 2; i <= n; i++)
 res *= 2;
 return res; }
 int main()
 {
 int x;
 scanf("%d", &x);
 printf("%llu\n", get_grains(x));
 return 0;
 }
 */

/* Задача 2
#include <stdio.h>
 
int nod(int a, int b)
{
int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
}
return a; }

int main()
{
int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", nod(a, b));
    return 0;
}
*/

/* Задача 3
#include <stdio.h>

int is_number(int n)
{
int sum = 0, mul = 1;
while (n > 0) {
        sum += n % 10;
        mul *= n % 10;
        n /= 10;
}
    return (sum == mul);
}

int main()
{
int n;
    scanf("%d", &n);
    is_number(n) ? printf("YES\n")
: printf("NO\n");
    return 0;
}
 */

/* Задача 4

#include <stdio.h>
int sum(int N)
{
int res = 0;
    for (int i = 1; i <= N; i++)
        res += i;
return res; }

int main()
{
int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
return 0; }
*/

/* Задача 5 */
#include <stdio.h>
int main()
{
int opened = 0, closed = 0;
char input, fl = 0;
while (1) {
        scanf("%c", &input);
        if ((input == '.') || (closed > opened))
            break;
        (input == '(') ? opened++ : closed++;
}
    (opened == closed) ? printf("YES\n") :
printf("NO\n");
return 0; }
