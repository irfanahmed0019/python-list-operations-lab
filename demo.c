#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void scan1(int *a)
{
    printf("\nEnter number: ");
    scanf("%d", a);
}

void scan2(int *a, int *b)
{
    printf("\nEnter two numbers: ");
    scanf("%d%d", a, b);
}

void scanf1(float *a)
{
    printf("\nEnter number: ");
    scanf("%f", a);
}

void scanf2(float *a, float *b)
{
    printf("\nEnter two numbers: ");
    scanf("%f%f", a, b);
}

/* ---------- Menu 4b: Menu-driven Alphabet Game (A for Apple ... Z for Zebra) ---------- */
void alphabet_game()
{
    int gch, i, idx;
    char c, c2;

     char *word[26] = {
        "Apple", "Ball", "Cat", "Dog", "Elephant", "Fish", "Goat", "Hat",
        "Ice cream", "Jug", "Kite", "Lion", "Mango", "Nest", "Orange", "Pen",
        "Queen", "Rat", "Sun", "Tiger", "Umbrella", "Van", "Watch", "Xylophone",
        "Yak", "Zebra"
    };

    while (1)
    {
        printf("\n+----------------------------------------------+\n");
        printf("|              ALPHABET GAME                    |\n");
        printf("+----------------------------------------------+\n");
        printf("| 0. Back to main menu                          |\n");
        printf("| 1. Enter a letter, get its word                |\n");
        printf("| 2. Print full A to Z list                     |\n");
        printf("+----------------------------------------------+\n");
        printf("Enter your choice: ");
        scanf("%d", &gch);

        if (gch == 0)
            break;

        switch (gch)
        {
            case 1:
                printf("Enter a letter: ");
                scanf(" %c", &c);
                c2 = (c >= 'A' && c <= 'Z') ? c + 32 : c;
                if (c2 >= 'a' && c2 <= 'z')
                {
                    idx = c2 - 'a';//ascii code of a=97
                    printf("%c for %s\n", c2 - 32, word[idx]);
                }
                else
                    printf("That's not a letter.\n");
                break;

            case 2:
                for (i = 0; i < 26; i++)
                    printf("%c for %s\n", 'A' + i, word[i]);
                break;

            default:
                printf("\nInvalid choice\n");
        }
    }
}

void print_menu()
{
    printf("+----------------------------------------------+\n");
    printf("|                 MENU - 1 (Sequential)         |\n");
    printf("+----------------------------------------------+\n");
    printf("| 0.  Exit                                      |\n");
    printf("| 1.  Arithmetic Operation                      |\n");
    printf("| 2.  Area and Perimeter                        |\n");
    printf("| 3.  Simple & Compound Interest                |\n");
    printf("| 4.  ASCII equivalent (decimal & hex)          |\n");
    printf("| 5.  Fahrenheit to Celsius                     |\n");
    printf("+----------------------------------------------+\n");
    printf("|                 MENU - 2 (Decision)           |\n");
    printf("+----------------------------------------------+\n");
    printf("| 6.  Leap Year or Not                          |\n");
    printf("| 7.  Smallest of Three Numbers                 |\n");
    printf("| 8.  Total Mark and grade obtained             |\n");
    printf("| 9.  Quadrant                                  |\n");
    printf("| 10. Roots of quadratic equation(ax2+bx+c)     |\n");
    printf("+----------------------------------------------+\n");
    printf("|                 MENU - 3 (Looping)            |\n");
    printf("+----------------------------------------------+\n");
    printf("| 11. Sum of digits of a number                 |\n");
    printf("| 12. Palindrome check                          |\n");
    printf("| 13. Prime check                               |\n");
    printf("| 14. Factorial of a number                     |\n");
    printf("| 15. Perfect number check                      |\n");
    printf("| 16. Fibonacci series up to n terms            |\n");
    printf("+----------------------------------------------+\n");
    printf("|                 MENU - 4 (Case Control)       |\n");
    printf("+----------------------------------------------+\n");
    printf("| 17. Weekday from day number (1-7)             |\n");
    printf("| 18. Alphabet Game (menu-driven)               |\n");
    printf("+----------------------------------------------+\n");
}

int main()
{
    int a = 0, b = 0, ch, restart;
    float x = 0;

    while (1)
    {
        print_menu();
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 0:
                printf("\nExiting...\n");
                return 0;

            /* ---------------- MENU 1 : SEQUENTIAL ---------------- */
            case 1:
            {
                scan2(&a, &b);
                printf("\nSum = %d\n", a + b);
                printf("Difference = %d\n", a - b);
                printf("Multiplication = %d\n", a * b);
                if (b == 0)
                    printf("Division = undefined (divide by zero)\n");
                else
                    printf("Division = %d\n", a / b);
                if (b == 0)
                    printf("Modulus = undefined (divide by zero)\n");
                else
                    printf("Modulus = %d\n", a % b);
                break;
            }

            case 2:
            {
                float radius, area, perimeter;
                printf("\nEnter radius: ");
                scanf("%f", &radius);
                area = 3.14f * radius * radius;
                perimeter = 2 * 3.14f * radius;
                printf("Area = %.2f\n", area);
                printf("Perimeter = %.2f\n", perimeter);
                break;
            }

            case 3:
            {
                float p, n, r, si, total, ci;
                printf("\nEnter principal, number of years, interest rate: ");
                scanf("%f%f%f", &p, &n, &r);
                si = (p * n * r) / 100;
                total = p + si;
                ci = total - p; /* same as si here since rate is flat, kept for clarity */
                printf("Simple Interest = %.2f\n", si);
                printf("Total Amount = %.2f\n", total);
                printf("Compound Interest = %.2f\n", ci);
                break;
            }

            case 4:
            {
                char c;
                printf("\nEnter a character: ");
                scanf(" %c", &c);
                printf("ASCII value (decimal) = %d\n", c);
                printf("ASCII value (hexadecimal) = %X\n", c);
                break;
            }

            case 5:
                scanf1(&x);
                printf("\nFahrenheit = %.2f\n", x);
                printf("Celsius = %.2f\n", (x - 32) * 5 / 9);
                break;

            /* ---------------- MENU 2 : DECISION ---------------- */
            case 6:
                scan1(&a);
                if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
                    printf("%d is a leap year.\n", a);
                else
                    printf("%d is not a leap year.\n", a);
                break;

            case 7:
            {
                int c;
                printf("\nEnter three numbers: ");
                scanf("%d%d%d", &a, &b, &c);
                printf("The smallest number is %d\n",(a<b)?((a<c)?a:c):((b<c)?b:c));
                break;
            }

            case 8:
            {
                int c,p;
                printf("\nEnter three marks: ");
                scanf("%d%d%d", &a, &b, &c);
                printf("Total mark = %d\n",a+b+c);
                p=((a+b+c)*100)/375;   /* multiply BEFORE dividing */
                printf("Percentage = %d\n", p);
                printf("Grade : %c\n",(p>=90)?'S':(p>=80)?'A':(p>=70)?'B':(p>=60)?'C':(p>=50)?'D':(p>=40)?'E':'F');
                break;
            }

            case 9:
                scan2(&a,&b);
                printf("Coordinate : %d quadrant \n",(a>0)?((b>0)?1:4):((b>0)?2:3));
                break;

            case 10:
            {
                float x1,y,z,d,r1,r2;
                printf("Enter the coefficient of a , b and c : ");
                scanf("%f%f%f",&x1,&y,&z);
                d=pow(y,2)-(4*x1*z);
                (d>0)?(r1=(-y+sqrt(d))/(2*x1),
                       r2=(-y-sqrt(d))/(2*x1),
                       printf("Root 1 =%.2f\tRoot 2 = %.2f",r1,r2)):printf("Roots are imaginary");
                break;
            }

            /* ---------------- MENU 3 : LOOPING ---------------- */
            case 11:
            {
                int n, sum = 0;
                scan1(&n);
                int temp = n;
                while (temp != 0)
                {
                    sum += temp % 10;
                    temp /= 10;
                }
                printf("Sum of digits of %d = %d\n", n, sum);
                break;
            }

            case 12:
            {
                int n, temp, rev = 0;
                scan1(&n);
                temp = n;
                while (temp != 0)
                {
                    rev = rev * 10 + temp % 10;
                    temp /= 10;
                }
                printf("%d is %s\n", n, (n == rev) ? "a palindrome" : "not a palindrome");
                break;
            }

            case 13:
            {
                int n, i, flag = 1;
                scan1(&n);
                if (n <= 1)
                    flag = 0;
                for (i = 2; i <= sqrt(n); i++)
                {
                    if (n % i == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
                printf("%d is %s\n", n, flag ? "prime" : "not prime");
                break;
            }

            case 14:
            {
                int n, i;
                int fact = 1;
                scan1(&n);
                if (n < 0)
                    printf("Factorial undefined for negative numbers\n");
                else
                {
                    for (i = 2; i <= n; i++)
                        fact *= i;
                    printf("Factorial of %d = %d\n", n, fact);
                }
                break;
            }

            case 15:
            {
                int n, i, sum = 0;
                scan1(&n);
                for (i = 1; i <= n / 2; i++)
                {
                    if (n % i == 0)
                        sum += i;
                }
                printf("%d is %s\n", n, (sum == n && n != 0) ? "a perfect number" : "not a perfect number");
                break;
            }

            case 16:
            {
                int n, i, t1 = 0, t2 = 1, next;
                scan1(&n);
                printf("Fibonacci series up to %d terms:\n", n);
                for (i = 1; i <= n; i++)
                {
                    printf("%d ", t1);
                    next = t1 + t2;
                    t1 = t2;
                    t2 = next;
                }
                printf("\n");
                break;
            }

            /* ---------------- MENU 4 : CASE CONTROL ---------------- */
            case 17:
                scan1(&a);
                switch (a)
                {
                    case 1: printf("Monday\n"); break;
                    case 2: printf("Tuesday\n"); break;
                    case 3: printf("Wednesday\n"); break;
                    case 4: printf("Thursday\n"); break;
                    case 5: printf("Friday\n"); break;
                    case 6: printf("Saturday\n"); break;
                    case 7: printf("Sunday\n"); break;
                    default: printf("Invalid day number\n");
                }
                break;

            case 18:
                alphabet_game();
                break;

            default:
                printf("\nInvalid choice\n");
        }

        printf("\n---------------------------------\n");
        printf("Press 0 to return to the menu\n");
        printf("Press any other number to exit\n");
        printf("---------------------------------\n");
        printf("Enter your choice : ");
        scanf("%d", &restart);
        if (restart != 0)
            break;
    }

    printf("\nProgram terminated.\n\n");
    return 0;
}
