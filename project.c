#include <stdio.h>

int main()
{
    int tot = 0; 
    int cont = 0; 
    int vote = 0;
    int average = 0;
    
    
    
    while(cont < 10){ 
        printf("Write a vote for 10 people from 1 to 100: ");
        scanf("%d", &voto);
       
        
        tot = vote + tot;
        cont = cont + 1;
    }


    average = tot / 10; 
    printf("Ur Average:%d", media);

    return 0;
}


// 1) A class of 10 students takes an exam. Voting can take
// values ​​from 1 to 100. Describe the algorithm for calculating the average of the grades
// class in the exam considered.
// The correct solution algorithm is reported within which, however, i
// individual blocks were not written rigorously. Rewrite the algorithm
// inserting precise instructions into the individual blocks. Write a program in
// C language that translates the block diagram thus created.
// The variables to use are the following:
// Tot = sum of votes;
// Cont = vote counter;
// Vote = vote to insert;
// Average = grade point average.