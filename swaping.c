#include <stdio.h>
 main()
  {
    int a, b;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);

    a = a - b;
    b = a + b;
    a = b - a;

    printf("After swapping, a = %.d\n", a);
    printf("After swapping, b = %.d", b);
}
