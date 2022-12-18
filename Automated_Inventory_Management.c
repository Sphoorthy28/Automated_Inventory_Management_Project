#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main()
{
  int total_amount = 0;
  // Display Username and Phone Number
  char name[50];
  int phone;
  printf("Enter your Name:~~");
  gets(name);
  printf("Enter your Phone Number:~~");
  scanf("%d", &phone);

  // Product Details struct
  struct pdt_details
  {
    char pdt_name[20];
    int price;
    int quantity;
    int row, col;
  };

  // Item List
  struct pdt_details item[50];
  strcpy(item[0].pdt_name, "Pen");
  strcpy(item[2].pdt_name, "Eraser");
  strcpy(item[1].pdt_name, "Pencil");
  strcpy(item[3].pdt_name, "Pen Pencil");
  strcpy(item[4].pdt_name, "Highlighter");
  strcpy(item[5].pdt_name, "Cover Paper");
  strcpy(item[6].pdt_name, "Stickers");
  strcpy(item[7].pdt_name, "Boards");
  strcpy(item[8].pdt_name, "Duster");
  strcpy(item[9].pdt_name, "Chalk");
  strcpy(item[10].pdt_name, "Markers");
  strcpy(item[11].pdt_name, "Ink Pot");
  strcpy(item[12].pdt_name, "Drawing Copy");
  strcpy(item[13].pdt_name, "Notebooks");
  strcpy(item[14].pdt_name, "Chips");
  strcpy(item[15].pdt_name, "Cold Drinks");
  strcpy(item[16].pdt_name, "Hard Drinks");
  strcpy(item[17].pdt_name, "Rolls");
  strcpy(item[18].pdt_name, "Choclates");
  strcpy(item[19].pdt_name, "Eggs");
  strcpy(item[20].pdt_name, "Fruits");
  strcpy(item[21].pdt_name, "Vegetables");
  strcpy(item[22].pdt_name, "Carrom Board");
  strcpy(item[23].pdt_name, "Chess");
  strcpy(item[24].pdt_name, "Ludo");
  strcpy(item[26].pdt_name, "Shuttlecork");
  strcpy(item[27].pdt_name, "Football");
  strcpy(item[28].pdt_name, "Basketball");
  strcpy(item[25].pdt_name, "Rackets");
  strcpy(item[29].pdt_name, "Rubix Cube");
  strcpy(item[30].pdt_name, "Bags");
  strcpy(item[31].pdt_name, "Medicines");
  strcpy(item[32].pdt_name, "Furniture");
  strcpy(item[33].pdt_name, "Trophies");
  strcpy(item[34].pdt_name, "Jewellery");
  strcpy(item[35].pdt_name, "Bed");
  strcpy(item[36].pdt_name, "Cushions");
  strcpy(item[37].pdt_name, "Bedsheets");
  strcpy(item[38].pdt_name, "Sleeping Bags");
  strcpy(item[39].pdt_name, "Cosmetics");
  strcpy(item[40].pdt_name, "Movie Tickets");
  strcpy(item[41].pdt_name, "Electronics");
  strcpy(item[42].pdt_name, "Footwear");
  strcpy(item[43].pdt_name, "Clothes");
  strcpy(item[44].pdt_name, "Flynet");
  strcpy(item[45].pdt_name, "Frames");
  strcpy(item[46].pdt_name, "Daily-Use");
  strcpy(item[47].pdt_name, "Hardware");
  strcpy(item[48].pdt_name, "Software");
  strcpy(item[49].pdt_name, "Utensils");

  // Location
  item[0].row = 1;
  item[1].row = 2;
  item[2].row = 3;
  item[3].row = 4;
  item[4].row = 5;
  item[5].row = 6;
  item[6].row = 7;
  item[7].row = 8;
  item[8].row = 9;
  item[9].row = 10;
  item[10].row = 1;
  item[11].row = 2;
  item[12].row = 3;
  item[13].row = 4;
  item[14].row = 5;
  item[15].row = 6;
  item[16].row = 7;
  item[17].row = 8;
  item[18].row = 9;
  item[19].row = 10;
  item[20].row = 1;
  item[21].row = 2;
  item[22].row = 3;
  item[23].row = 4;
  item[24].row = 5;
  item[25].row = 6;
  item[26].row = 7;
  item[27].row = 8;
  item[28].row = 9;
  item[29].row = 10;
  item[30].row = 1;
  item[31].row = 2;
  item[32].row = 3;
  item[33].row = 4;
  item[34].row = 5;
  item[35].row = 6;
  item[36].row = 7;
  item[37].row = 8;
  item[38].row = 9;
  item[39].row = 10;
  item[40].row = 1;
  item[41].row = 2;
  item[42].row = 3;
  item[43].row = 4;
  item[44].row = 5;
  item[45].row = 6;
  item[46].row = 7;
  item[47].row = 8;
  item[48].row = 9;
  item[49].row = 10;

  item[0].col = 1;
  item[1].col = 2;
  item[2].col = 3;
  item[3].col = 4;
  item[4].col = 5;
  item[5].col = 6;
  item[6].col = 7;
  item[7].col = 8;
  item[8].col = 9;
  item[9].col = 10;
  item[10].col = 1;
  item[11].col = 2;
  item[12].col = 3;
  item[13].col = 4;
  item[14].col = 5;
  item[15].col = 1;
  item[16].col = 2;
  item[17].col = 3;
  item[18].col = 4;
  item[19].col = 5;
  item[20].col = 1;
  item[21].col = 2;
  item[22].col = 3;
  item[23].col = 4;
  item[24].col = 5;
  item[25].col = 1;
  item[26].col = 2;
  item[27].col = 3;
  item[28].col = 4;
  item[29].col = 5;
  item[30].col = 1;
  item[31].col = 2;
  item[32].col = 3;
  item[33].col = 4;
  item[34].col = 5;
  item[35].col = 1;
  item[36].col = 2;
  item[37].col = 3;
  item[38].col = 4;
  item[39].col = 5;
  item[40].col = 1;
  item[41].col = 2;
  item[42].col = 3;
  item[43].col = 4;
  item[44].col = 5;
  item[45].col = 1;
  item[46].col = 2;
  item[47].col = 3;
  item[48].col = 4;
  item[49].col = 5;

  // row
  item[0].quantity = 120;
  item[1].quantity = 120;
  item[2].quantity = 120;
  item[3].quantity = 120;
  item[4].quantity = 120;
  item[5].quantity = 120;
  item[6].quantity = 120;
  item[7].quantity = 120;
  item[8].quantity = 120;
  item[9].quantity = 120;
  item[10].quantity = 120;
  item[11].quantity = 120;
  item[12].quantity = 120;
  item[13].quantity = 120;
  item[14].quantity = 120;
  item[15].quantity = 120;
  item[16].quantity = 120;
  item[17].quantity = 120;
  item[18].quantity = 120;
  item[19].quantity = 120;
  item[20].quantity = 120;
  item[21].quantity = 120;
  item[22].quantity = 120;
  item[23].quantity = 120;
  item[24].quantity = 120;
  item[25].quantity = 120;
  item[26].quantity = 120;
  item[27].quantity = 120;
  item[28].quantity = 120;
  item[29].quantity = 120;
  item[30].quantity = 120;
  item[31].quantity = 120;
  item[32].quantity = 120;
  item[33].quantity = 120;
  item[34].quantity = 120;
  item[35].quantity = 120;
  item[36].quantity = 120;
  item[37].quantity = 120;
  item[38].quantity = 120;
  item[39].quantity = 120;
  item[40].quantity = 120;
  item[41].quantity = 120;
  item[42].quantity = 120;
  item[43].quantity = 120;
  item[44].quantity = 120;
  item[45].quantity = 120;
  item[46].quantity = 120;
  item[47].quantity = 120;
  item[48].quantity = 120;
  item[49].quantity = 120;

  // Price List
  item[0].price = 99;
  item[1].price = 99;
  item[2].price = 99;
  item[3].price = 99;
  item[4].price = 99;
  item[5].price = 99;
  item[6].price = 99;
  item[7].price = 99;
  item[8].price = 99;
  item[9].price = 99;
  item[10].price = 99;
  item[11].price = 99;
  item[12].price = 99;
  item[13].price = 99;
  item[14].price = 99;
  item[15].price = 99;
  item[16].price = 99;
  item[17].price = 99;
  item[18].price = 99;
  item[19].price = 99;
  item[20].price = 99;
  item[21].price = 99;
  item[22].price = 99;
  item[23].price = 99;
  item[24].price = 99;
  item[25].price = 99;
  item[26].price = 99;
  item[27].price = 99;
  item[28].price = 99;
  item[29].price = 99;
  item[30].price = 99;
  item[31].price = 99;
  item[32].price = 99;
  item[33].price = 99;
  item[34].price = 99;
  item[35].price = 99;
  item[36].price = 99;
  item[37].price = 99;
  item[38].price = 99;
  item[39].price = 99;
  item[40].price = 99;
  item[41].price = 99;
  item[42].price = 99;
  item[43].price = 99;
  item[44].price = 99;
  item[45].price = 99;
  item[46].price = 99;
  item[47].price = 99;
  item[48].price = 99;
  item[49].price = 99;

  char ch;

  do
  {
    int flag = 1;
    int check = 0;
    char pdt_item[50];
    printf("Enter the name of item:~~");
    scanf("%s", pdt_item);

    for (int i = 0; i < 50; i++)
    {
      strcmp(pdt_item, item[i].pdt_name);

      if (!(strcmp(pdt_item, item[i].pdt_name)))
      {
        printf("Product Found\n");

        int qty;
        printf("The Price of the product is %d \n", item[i].price);
        printf("The location is \nrow->%d \ncolumn->%d \n", item[i].row, item[i].col);

        printf("Enter Quantity:~~");
        scanf("%d", &qty);

        if (item[i].quantity >= qty)
        {
          printf("Yes! Quantity Available \n");
          check = 1;
          break;
        }
        else
        {
          printf("Only %d is available \n", item[i].quantity);
          break;
        }
      }

      else
      {
        flag = 0;
      }
    }

    if (flag == 0 && check == 0)
    {
      printf("Product Not Found\n");
    }

    printf("\nDo you want something else (y/n):~~");
    fflush(stdin);
    scanf("%c", &ch);

  } while (ch == 'y' || ch == 'Y');

  int x;
  printf("Enter number of items:");
  scanf("%d", &x);
  int temp_ar[x];
  // Billing Part

  struct pdt_details bill[x];

  for (int i = 0; i < x; i++)
  {
    temp_ar[i] = 0;
  }

  for (int i = 0; i < x; i++)
  {
    fflush(stdin);
    printf("Item name:~~");
    scanf("%s", bill[i].pdt_name);

    fflush(stdin);
    printf("Item Quantity:~~");
    scanf("%d", &bill[i].quantity);
    printf("\n");
  }

  if (x == 0)
  {
    printf("Thank You for Visiting\n");
    return 0;
  }

  // checking price
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < 50; j++)
    {
      if (!strcmp(bill[i].pdt_name, item[j].pdt_name))
      {
        temp_ar[i] = 1;
        bill[i].price = item[j].price;
        if (bill[i].quantity > item[j].quantity)
        {
          temp_ar[i] = 1;
          bill[i].quantity = item[j].quantity;
          printf("\n\n\n");
          printf("-------ALERT------");
          printf("\nAdequate quantity not found for %s\n", bill[i].pdt_name);
        }
      }
    }
  }
  time_t t;
  time(&t);
  printf("\n\n\n");
  printf(" ** Billing **\n");
  printf("The time of billing is %s", ctime(&t));
  printf("------------------------------------------------------------------\n");
  printf("------------------------------------------------------------------\n");
  printf("S.N.| NAME | QUANTITY | PRICE | Total Price \n");
  printf("------------------------------------------------------------------\n");
  printf("------------------------------------------------------------------\n");
  for (int i = 0, k = 0; i < x; i++)
  {
    if (temp_ar[i])
    {
      k++;
      total_amount += bill[i].quantity * bill[i].price;
      printf("%d %-10s %-5d %-5d %-5d \n", k, bill[i].pdt_name, bill[i].quantity, bill[i].price, bill[i].quantity * bill[i].price);
    }
  }
  printf("-------------------- ToTal Amount : Rs %d -----------------------\n", total_amount);
  printf("------------------------------------------------------------------\n");
  printf("------------------------------------------------------------------\n");
  printf("---------------Thank You For Shopping ----------------------------\n");

  FILE *ftp;
  ftp = fopen("./biling-history.txt", "a");
  int total_amountf = 0;
  fprintf(ftp, "Customer Name:%s\n", name);
  fprintf(ftp, "Phone number:%d\n", phone);
  fprintf(ftp, "The time of billing is %s", ctime(&t));
  fprintf(ftp, "S.N.| NAME | QUANTITY | PRICE | Total Price \n");
  fprintf(ftp, "------------------------------------------------------------------\n");
  fprintf(ftp, "------------------------------------------------------------------\n");
  for (int i = 0, k = 0; i < x; i++)
  {
    if (temp_ar[i])
    {
      k++;
      total_amountf += bill[i].quantity * bill[i].price;
      fprintf(ftp, "%d %-10s %-5d %-5d %-5d \n", k, bill[i].pdt_name, bill[i].quantity, bill[i].price, bill[i].quantity * bill[i].price);
    }
  }
  fprintf(ftp, "-------------------- ToTal Amount : Rs %d -----------------------\n", total_amountf);
  fprintf(ftp, "------------------------------------------------------------------\n\n");
  fclose(ftp);
  return 0;
}
