#include <stdio.h>

struct items{
    int srno;
    float cost;
    float weight;
    double ratio;
};

void printItems(struct items it[],int n){
    printf("Printing data\n");
    printf("Sr no\tcost\t\tweight\t\tPer item/weight\n");
    for(int i=0;i<n;i++){
        printf("%d\t%f\t%f\t%lf\n",it[i].srno,it[i].cost,it[i].weight,it[i].ratio);
    }
}
void bsortDesc(struct items list[], int s)
{
    int i, j;
    struct items temp;
    
    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (list[j].ratio < list[j + 1].ratio)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }
}

void profit(struct items it[],int n,int sack){
    int temp = 0;
    double profitRob=0;
    for(int i=0;i<n;i++){
        if(sack>0){
            temp = sack - it[i].weight;
            if(temp>0){
                profitRob+=it[i].weight;
            }
            else{
                profitRob+= sack*(it[i].cost/it[i].weight);
            }
            sack = sack - it[i].weight;
        }
    }
    printf("\nTotal profitable is %lf",profitRob);
}
int main()
{
    int n,sack;
    printf("Enter number of items:");
    scanf("%d",&n);
    struct items itemsArray[n]; 
    printf("\nEnter data of each items\n");
    for(int i=0;i<n;i++){
        printf("\nEnter Sr no:\n");
        scanf("%d",&itemsArray[i].srno);
        printf("\nEnter cost of item:\n");
        scanf("%f",&itemsArray[i].cost);
        printf("\nEnter weight of item:\n");
        scanf("%f",&itemsArray[i].weight);
        itemsArray[i].ratio = itemsArray[i].cost/itemsArray[i].weight;
    }
    printf("\nEnter available sack space:\n");
    scanf("%d",&sack);
    
    printItems(itemsArray,n);
    bsortDesc(itemsArray,n);
    printItems(itemsArray,n);
    profit(itemsArray,n,sack);
    return 0;
}
