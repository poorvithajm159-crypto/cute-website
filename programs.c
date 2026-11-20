#include<stdio.h>
#include<stdlib.h>
int i,op,a[10],pos,n,ele;
void insert(){
    printf("Enter element:");
    scanf("%d",&ele);
    printf("Enter location:");
    scanf("%d",&pos);
    if(pos>n)
    printf("loaction not found\n");
for(i=n;i>=pos;i++){
    a[i+1]=a[i];
    a[pos]=ele;
    n++;
}
void del(){
    printf("Enter element:");
    scanf("%d",&ele);
    printf("Enter location:");
    scanf("%d",&pos);
    if(pos>n)
    printf("Location not found.\n");
for(i=pos;i<n;i++){
    a[i]=a[i+1];
    ele=pos;
    n--;
}
void display(){
    printf("Array elements:");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
    
    int main(){
        int n;
        printf("Enter number of elements in array:");
        scanf("%d",&n);
        printf("Enter elements of array:");
        for(i=0;i<n;i++)
        scanf("%d",a[i]);
    printf("Enter 1.Insertion,2.deletion,3.display,4.exit\n");
    while(1){
        printf("Enter operation:");
        scanf("%d",&op);
        switch(op)
        {
            case 1: insert();
            break;
            case 2: del();
            break;
            case 3: display();
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid operation.");
        }
    }
    
    }
}
}
}