#include<stdio.h>
#include<math.h>

float squareroot(float,int);

float squareroot(float n,int precise)
{
    float root = n;
    float y = 1;
    float precision = pow(10,-precise);
    while(root - y > 0.001)
    {
        root = (root + y)/2;
        y = n/root;
    }
    return root;
}

int main()
{
    float number;
    printf("Enter the number: ");
    scanf("%f",&number);
    printf("Enter the precision point: ");
    int precise;
    scanf("%d",&precise);
    printf("Square root of number %.3f is %.3f\n",number,squareroot(number,precise));
    return 0;
}
