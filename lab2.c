/*******************************************************
 * Programmer: Justin Stewart
 * CWID: 890986904
 ******************************************************/

#include <stdio.h>

//avg - Calculate and return average
float avg(int sum, int count);

/*******************************************************
 * ABOVE AVERAGE AVERAGE CALCULATOR
 *______________________________________________________
 * This program calculates and outputs the average of 
 * those that are above average.
 *______________________________________________________
 *INPUTS: 
 *   input: Integer input from buffer
 *OUTPUTS:
 *   aboveAverage: Average value calculated from input
 ******************************************************/
int main(void)
{
  int arr[10000];     //Integer array
  int count;          //Counter of instances
  int aboveCount;     //Counter of above average instances
  int input;          //Input from user/file
  int tempSum;        //Temporary sum of array
  float average;      //Average of array
  float aboveAverage; //Average of above average

  //Initialization
  count = 0;
  aboveCount = 0;
  tempSum = 0;
  average = 0.0;
  aboveAverage = 0.0;

  //DO-WHILE - Loop until input is a negative value.
  do{
    scanf("%d", &input);
    //IF - Inputs value only if positive.
    if(input > -1){
      arr[count] = input;
      count++;
    }//END IF
  }while(input > -1);//END DO-WHILE

  //FOR - Loop through array adding up sum
  for(int i = 0; i < count; i++) {
    tempSum = tempSum + arr[i];
  }//END FOR

  //Calculate average and re-initialize tempSum
  average = avg(tempSum, count);
  tempSum = 0;
  
  //FOR - Loop through array adding up sum
  for(int j = 0; j < count; j++) {
    //IF - Adds up sum only if value is above average
    if(arr[j] > average) {
      tempSum = tempSum + arr[j];
      aboveCount++;
    }//END IF
  }//END FOR

  //Calculate above average
  aboveAverage = avg(tempSum, aboveCount);

  //Output
 printf("%s %3f\n", "Above Average Average: ", aboveAverage);

 return 0;

}

//avg - Calculate and return average
float avg(int sum, int count) {
  return (float) sum/count;
}
