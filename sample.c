 #include<stdio.h>
 #include<math.h>

 void calculator(float num1,float num2,char ch){
    switch(ch){
        case '+':
        printf("%.2f",num1+num2);
        break;
        case '-':
        
            printf("%.2f",num1-num2);
        
        break;
        case '*':
        printf("%.2f",num1*num2);
        break;
        case '/':
        if(num2==0){
            printf("error!");
             return ;
        }
       
        printf("%.2f",num1/num2);
        break;
        case '^':
        printf("%f",pow(num1,num2));
        break;
        default:
        printf("invalid inputs");
        break;
        
    }
 }
 void calculator1(float angle, char ch){
    switch(ch){
      case 's':
      printf("%.2f",sin(angle));
      break;
      case 'c':
      printf("%.2f",cos(angle));
      break;
    }
 }
 int main(){
    float num1,num2,angle;
    char ch;
    printf("select any operation +,-,*,/,sin,cos");
    scanf(" %c",&ch);
    if(ch=='*'||ch=='-'||ch=='/'||ch=='+'||ch=='^'){

    
    printf("enter first number\n");
    scanf("%f",&num1);
    printf("enter second number\n");
    scanf("%f",&num2);
    
    calculator(num1,num2,ch);}
    if(ch=='s'||ch=='c'){
        printf("enter angle");
        
        scanf("%f",&angle);
        float angle1=((angle*3.14)/180);
        calculator1(angle1,ch);
    }
 }

