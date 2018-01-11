#include “ItemToPurchase.h”//including .h file
/*Initially initialising with default values*/
void MakeItemBlank(ItemPurchase *item) {
 int i;
 char temp[10]=”none”;
 for(i=0;i strcpy(item[i].itemName,temp);
 item[i].itemPrice=0;
 item[i].itemQuantity=0;
 }

}
/*PrintItemCost method will calculate cost of all item
* printing cost and name and total cost of particular item
* printing Total cost of all items */
void PrintItemCost(ItemPurchase *item) {
 /*Variable declarations*/
 int totalCost=0;
 int cost=0;
 int i=0;
 printf(“TOTAL COST\n”);
 /*for loop for calculating cost*/
 for(i=0;i cost=item[i].itemPrice*item[i].itemQuantity;
 printf(“%s %d @ $%d=$%d\n”,item[i].itemName,item[i].itemQuantity,item[i].itemPrice,cost);
 totalCost+=cost;
 cost=0;

 }
 printf(“Total:$%d\n”,totalCost);

}
/**********************main.c*******************/
#include “ItemToPurchase.h”
/*Main function start*/
int main(){
int i;
char name[128];
ItemPurchase item[2];
/*prompt for user inputs*/
for(i=0;i
 printf(“Item %d\n”,(i+1));
 printf(“Enter the item name:”);
 scanf(“ %[^\n]s”, name);
 strcpy(item[i].itemName,name);
 printf(“Enter the item price:”);
 scanf(“%d”,&item[i].itemPrice);
 printf(“Enter the item quantity:”);
 scanf(“%d”,&item[i].itemQuantity);
}
PrintItemCost(item);
return 0;
}
