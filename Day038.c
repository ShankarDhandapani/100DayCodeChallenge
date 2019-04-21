#include <stdio.h>
#include<string.h>
int sum(int *,int *);
int sum2(int *,int*);
int main(void) {
  int i,num,n=0,sum1=0;
  char str[10];
  printf("What do you want to choose\n1.String\n2.Integer\n");
  scanf("%d",&n);
  if(n==2){
    printf("Enter the number\n");
    scanf("%d",&num);
    sum(&num,&sum1);
     num=sum1;
    if(sum1>=10){num=0;
      sum2(&num,&sum1);
    }
    printf("Sum of digits is %d",num);
  }
  else{
    printf("Enter the string\n");
    scanf("%s",str);
    printf("The number equivalent of a given text is\n");
    for(i=0;i<strlen(str);i++){
      num=str[i]-96;
      printf("%d",num);
      sum(&num,&sum1);
    }num=sum1;
    if(sum1>=10){
      num=0;
      sum2(&num,&sum1);
    }
    printf("\nSum of digits is %d",num);
  }
  return 0;
}
int sum(int * num,int * sum1){
  while (*num>0){
    *sum1+=(*num%10);
    *num=*num/10;
  }
  return *sum1;
}
int sum2(int * num,int*sum1){
  while(*sum1>0){
    *num+=(*sum1%10);
    *sum1=*sum1/10;
  }
  return *num;
}
