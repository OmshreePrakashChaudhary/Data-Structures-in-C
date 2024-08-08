//Domonstrated Access of array using pointers.
#include <stdio.h>

int main()
{
   
    int marks[10]={40,30,78,90,23,89,60,45,20,100};
    printf("Displaying grey box values of array:\n\nmarks[0]=%d\t marks[2]=%d\t marks[4]=%d\t marks[6]=%d\t marks[8]=%d\t marks[9]=%d\n",marks[0],marks[2],marks[4],marks[6],marks[8],marks[9]);
    for(int i=0;i<10;i++)
    {
        marks[i]+=10;
    }
    printf("\nDisplaying values Incremented by +10: \n\nmarks[0]=%d\nmarks[1]=%d\nmarks[2]=%d\nmarks[3]=%d\nmarks[4]=%d\nmarks[5]=%d\nmarks[6]=%d\nmarks[7]=%d\nmarks[8]=%d\nmarks[9]=%d",marks[0],marks[1],marks[2],marks[3],marks[4],marks[5],marks[6],marks[7],marks[8],marks[9]);
    
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    printf("\n\nMatrix values:\n\n%d %d %d\n%d %d %d\n%d %d %d",matrix[0][0],matrix[0][1],matrix[0][2],matrix[1][0],matrix[1][1],matrix[1][2],matrix[2][0],matrix[2][1],matrix[2][2]);
    printf("\n\nDisplaying alternative elements of the matrix Fig-1:\n\n%d\t%d\n    %d\n%d\t%d",*(*(matrix)),*(*(matrix)+2),*(*(matrix+1)+1),*(*(matrix+2)),*(*(matrix+2)+2));
    printf("\n\nDisplaying alternative elements of the matrix Fig-2:\n\n    %d\n%d\t%d\n    %d",(*(*matrix+1)),*(*(matrix+1)),*(*(matrix+1)+2),*(*(matrix+2)+1));
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j]-=5;
        }
    }
    
    printf("\nDisplaying values Decremented by -5:\n\n%d%d%d\n%d %d %d\n %d %d %d",matrix[0][0],matrix[0][1],matrix[0][2],matrix[1][0],matrix[1][1],matrix[1][2],matrix[2][0],matrix[2][1],matrix[2][2]);
    
}
