// Leyla Abdullayeva - "Introduction to Programming - "C" final project" //
//Unit Converter (temp, currency, volume, mass and more) //

#include<stdio.h>
#include<conio.h>

int main()
{

    float liras;
    float dollars=0.17;
    float pounds=0.13;
    float temp;
    float volume;
    float km;
    float m;
    float feet;
    float inch;
    float cm;
    float weight = 0.0; //in pounds
    float height = 0.0; //in inches
    float BMI = 0.0;
    
    
    
    printf("Enter liras:\n");
    scanf("%f",&liras);
    
    printf("Dollars: %.2f\n",liras*dollars);
    printf("Pounds: %.2f\n",liras*pounds);
    
    printf("Input temperature in degree celcius:\n");
    scanf("%f",&temp);
    printf("Equivalent temperature in degree fahrenheit is %f:\n\n",temp*1.8+32);
	
    printf("Enter distance in kilometers:\n");
    scanf("%f",&km);
    
    /*calculate the conversion*/
    
    m = km * 1000;       //since 1km=100m
    feet = km * 3280.84; //since 1km=3280.84feet
    inch = km * 39370.1; //since 1km=39379.1 Inches
    cm = km * 100000;    //since 1km=100000 Cm
    
    printf("\n Distance in kilometers=%f",km);
    printf("\n Distance in meters=%f",m);
    printf("\n Distance in feet=%f",feet);
    printf("\n Distance in inches=%f",inch);
    
    printf("Please enter your weight in pounds:\n\n");
    scanf("%f",&weight);
    
    printf("Please enter your height in inches:\n");
    scanf("%f",&height);
    
    BMI = weight*703/(height * height);
    
    if(BMI <= 19.6)
    
      printf("\nYour BMI is %f: Underweight.\n",BMI);
      
    else  if(BMI <=24.9)
       
       printf("\nYour BMI is %f: Normal.\n",BMI);
       
    else if(BMI <=29.9)
    
       printf("\nYour BMI is %f: Overweight.\n",BMI);
       
    else
       
       printf("\nYour BMI is %f: Obese.\n", BMI);
    
    return 0;
}//end main	
