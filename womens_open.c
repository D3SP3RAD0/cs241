#include <stdio.h>

/*
    Nicholas Livingstone  January 28th, 2020 UNM CS241 in-class assignment. 
    Last three Women's Open Champion of the Boston Marathon
    Displays a table of the time of each distance checkpoint
*/

int main(int argc, char const *argv[])
{
    float dist = 42;    //set distance of each run
    //calculate and store constant speed of each runner
    float speeds[3] = {dist/142,        //Kiplagat
                    dist/160,           //Linden
                    dist/144};          //Degefa
    float dist_checks[3];    //array to store the times at each distance checkpoint

    printf("Checkpoint | Kiplagat | Linden | Degefa\n");
    printf("---------------------------------------\n");

   
    // Loop through each speed checkpoint
    for(float checkpoint = 0; checkpoint <= 42; checkpoint += 6){    //UPDATE NOTE: Remove the distance array for each time, just calculate at the current time in the loop. Change the loop to increment on the checkpoint. 

        //loop through each runner
        for(int j = 0; j < 3; j++){
            dist_checks[j] = checkpoint/speeds[j]; //calculate the time at each distance checkpoint
        }

        printf("%10.0f | %8.2f | %6.2f | %6.2f \n", checkpoint, dist_checks[0], dist_checks[1], dist_checks[2]); 
    
    }

    return 0;
}
