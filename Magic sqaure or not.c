#include<stdio.h>
int main(){
	int same_row,same_column,IK_0 = 0;int IK_1 = 0;int IK_2 = 0;int IK_3 = 0;int IK_4 = 0;int IK_5 = 0;int mat[3][3];int row_sum=0;int column_sum=0;int diag_sum=0;
	int row=0;
	printf("Enter element of 3 by 3 square matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&mat[i][j]);
		}
		}
		
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" %d",mat[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for( int j=0;j<3;j++){
			row_sum=mat[i][j]+row_sum;
			if(i==0){
				IK_0=row_sum;
				}
				if(i==1){
				IK_1=row_sum;	
			}
				if(i==2){
				IK_2=row_sum;
				}
	}
		row_sum=0;
	}
	    	printf("\nSum of 1st row %d",IK_0);
			printf("\nSum of 2nd row  %d",IK_1);
			printf("\nSum of 3rd row  %d",IK_2);
			if(IK_0==IK_1 && IK_1==IK_2){
			
			 same_row=IK_0;}
			printf("\n----------------------------------------------------------------------------------------------------------");
	int j;
	for(int i=0;i<3;i++){
		for(j=0;j<3;j++){
		
		     column_sum=mat[j][i]+column_sum;
            if(i==0){
				IK_3=column_sum;
			}
				if(i==1){
				IK_4=column_sum;
					}
				if(i==2){
				IK_5=column_sum;
	}
		}
        	column_sum=0;
			}
			printf("\nsum of 1st column %d ",IK_3);
			printf("\nSum of 2nd column %d",IK_4);
			printf("\nSum of 3rd column  %d",IK_5);
	     	if(IK_3==IK_4 && IK_4==IK_5){
		    same_column=IK_3;
}
	printf("\n\n---------------------------------------------------------------------------------------------------------");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				diag_sum=mat[i][j]+diag_sum;
			}
	}}
		printf("\nSum of diagnal elements is %d    ",diag_sum);
	if(same_row==same_column && same_column==diag_sum){
		printf("\nSo It is a magic square matrix");
	}
	if(same_row!=same_column && same_column!=diag_sum){
		printf("\nSo Not a magic square matrix");
	}
	return 0;
}