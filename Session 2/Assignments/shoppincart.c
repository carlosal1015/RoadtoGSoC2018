#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product
{
        int id;
        char name[20];
        int price;
        int qty;
};

struct Bill
{
        int pid;
        char pname[20];
        int pprice;
};

char mygetch();

int getID();
int billFileNo();

void manageProduct();
void purchaseProduct();
void generateBill();
void addProduct();
void displayAllProduct();
struct Product findProduct(int id);
void updateProduct(int id, int qty);

char fproduct[]={"product.dat"};
char fbill[]={"bill.dat"};
int total=0;

int main()
{
        FILE *fp;
        int ch;

        system("clear"); //clrscr();

        while(1)
        {

                system("clear");

                printf("===================================\n\n");

                printf("\t\t Welcome Product Management System\n\n");

                printf("======================================\n\n");

                printf("1. Manage Product\n\n");
                printf("2. Purchase Product\n\n");

                printf("3. Generate Bill\n\n");

                printf("0. Exit\n\n");

                printf("============================\n\n");

                printf("\nPlease enter you choice:");
                scanf("%d", &ch);

                switch(ch)
                {
                        case 1: manageProduct();
                                break;

                        case 2: purchaseProduct();
                                break;

                        case 3: generateBill();
                                break;

                        case 0: exit(0);
                }

                mygetch();
        }

        return 0;
}

int getID();
{
        FILE *fp;
        int value=0;
        fp=fopen("prodid.txt","r");

        if(fp==NULL)
        {
                fp=fopen("prodid.txt", "w");
                fprintf(fp,"%d",0);
                fclose(fp);
                fp=fopen("prodid.txt","r");
        }

        fscanf(fp,"%d",&value);

        fclose(fp);

        fp=fopen("prodid.txt","w");

        fprintf(fp,"%d",value+1);

        fclose(fp);

        return value+1;
}

void manageProduct()
{
        int ch;
        int back=0;
        while(1)
        {

                system("clear");

                printf("============================\n\n");

                printf("\t\t Welcome Product Management System\n\n");

                printf("===============================\n\n");

                printf("1. Add New Product\n\n");
                printf("2. Display All Product\n\n");

                printf("0. Back\n\n");

                printf("============================\n\n");

                printf("\nPlease enter your Choice:");
                scanf("%d",&ch);

                switch(ch)
                {
                        case 1: addProduct();
                                break;

                        case 2: displayAllProduct();
                                break;

                        case 0: back=1;
                                break;
                }

                if(back==1)
                {
                        break;
                }
                else
                {
                        mygetch();
                }
        }
}

void addProduct()
{
        FILE *fp;
        struct Product t1;

        fp=fopen(fproduct,"ab");

        t1.id=getID();

        printf("\nEnter product name:");
        scanf("%s",t1.name);
        printf("\nEnter product price:");
        scanf("%d",&t1.price);
        printf("\nEnter product qty:");
        scanf("%d",&t1.qty);

        fwrite(&t1.sizeof(t1),1,fp);

        fclose(fp);
}

void displayAllProduct()
{
        FILE *fp;
        struct Product t;
        int id,found=0;

        System("clear");

        fp=fopen(fproduct,"rb");

        printf("========================\n\n");
        printf("\t\t Product Details \n\n");
        printf("===========================\n\n");

        printf("ID\tName\tQty.\tPrice\n\n");

        while(1)
        {
                fread(&t,sizeof(t),1,fp);

                if(feof(fp))
                {
                        break;
                }

                printf("%d\t",t.id);
                printf("%s\t",t.name);
                printf("%d\t",t.qty);
                printf("%d\t\t\n",t.price);;
        }
        printf("=================================\n\n");
        fclose(fp);
}

void purchaseProduct()
{
        char ch1,ch2;
        int id;
        system("clear");
        printf("=========================================================\n\n");

        printf("\t\t Welcome Product Management System\n\n");

        printf("==================================\n\n");

        while(1)
        {
                displayAllProduct();
                __fpurge(stdin);      //fflush(stdin);

                printf("\n\n\nDo you want to purchase [Y/N]:");
                scanf("%c",&ch1);

                if(ch1=='Y')
                {
                        FILE *fp;
                        struct Bill t1;
                        struct Product t2;

                        fp=fopen(fbill,"ab");

                        printf("\nEnter the Product ID to Purchase");
                        scanf("%d",&id);

                        t2=findProduct(id);

                        t1.pid=t2.id;



                }
        }
}
