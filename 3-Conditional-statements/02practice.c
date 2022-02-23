#include <stdio.h>
int main()
{

    int maths, phy , chem ;
    printf("Enter Marks of Maths\n");
    scanf("%d", &maths);

    printf("Enter Marks of Physics\n");
    scanf("%d", &phy);

    printf("Enter Marks of Chemistry\n");
    scanf("%d", &chem);
    

    float total;

    total = (maths + phy + chem ) / 3;
    if ((total < 40) || maths < 33 || phy < 33 || chem < 33)
    {
        printf("Your total Percentage is %f and you are fail", total);
    }

    else
    {
        printf("Your total Percentage is %f and you are PASS", total);
    }
    return 0;
}