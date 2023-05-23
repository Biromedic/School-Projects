// This provides the entry point for the Hospital program

#include <stdio.h>
#include "Patient.h"
#pragma warning(disable : 4996)

void bubble_sort(Patient arr[], int n)
{
    int i, j;
    Patient temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(void)
{
	Patient patient_ary[MAX_BEDS];
    FILE *file_read, *file_write;

    file_read = fopen(RANDOM_PATIENT_FILE, "r");
    file_write = fopen(ORDERED_PATIENT_FILE, "w");

    if (file_read == NULL || file_write == NULL){
        printf("fail to open file\n");
        return 1;
    }


	int num_pats = 0;

	while ( !feof(file_read))
	{
		fscanf(file_read, "%s %s %d", patient_ary[num_pats].name, patient_ary[num_pats].surname, &patient_ary[num_pats].age);
        num_pats++;
	}

    bubble_sort(patient_ary, num_pats);
	fclose(file_read);
	
	int i,j ;
	
    for (i=0; i < num_pats; i++) {
        fprintf(file_write, "%s %s %d\n", patient_ary[i].name, patient_ary[i].surname, patient_ary[i].age);
    }

    fclose(file_write);

	printf("Patients ordered by age in the output file!..\n");


    printf("student name: Birkan Cemil Abaci "
           "number: 20070001048");
	return 0;
}
