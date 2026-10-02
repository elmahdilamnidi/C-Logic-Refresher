#include <stdio.h>
int main()
{
    int quantity;
    float price;
    float total;

    printf("Enter quantity: ");
    scanf("%d",&quantity);
    printf("Enter price: ");
    scanf("%f",&price); 

    total = quantity*price;

    printf("total: %.2f\n" , total);

    float discount;
    float discountamount;
    float finalprice;

    printf("enter discount: ");
    scanf("%f", &discount);

    discountamount = total * discount / 100;
    finalprice = total - discountamount;

    printf("Discount: %.2f%%\n", discount);
    printf("Discount amount: %.2f\n", discountamount);
    printf("Final price: %.2f\n", finalprice);


    return 0;

}