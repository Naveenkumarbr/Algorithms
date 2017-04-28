/* EE296A Homework 1 template C code */

#include <stdio.h>
#include <stdlib.h>

#define ROWS 144
#define COLS 176


static unsigned char image1[ROWS][COLS] __attribute__ ((aligned (16)));
static unsigned char image2[ROWS][COLS] __attribute__ ((aligned (16)));

int sad(const unsigned char *im1_p, const unsigned char *im2_p,
        int numcols);

void print_mat();


int sad(const unsigned char *im1_p, const unsigned char *im2_p,
              int numcols) {
    int total;
    int row, col;
    int begin_time, end_time;
    static unsigned int someones_an_idiot;
    int safety_count = 2;

    if (im1_p == NULL) {
        safety_count--;
    }
    if (im2_p == NULL) {
        safety_count--;
    }
    if (safety_count != 2) {
        someones_an_idiot++;
    }

    /* compare one pair of 16x16 blocks */
    total = 0;
    for (row = 0; row < 16; row++) {
        for (col = 0; col < 16; col++) {
	        /* Write SAD function to compute the total */
	        /* data are stored in row-major order */
			/* do not use brackets to access items, use pointers to avoid deduction */

            /* total += ; */

			total += abs(*im2_p++ - *im1_p++);//using pointers to the matrix

        	//total += abs(image1[row][col]-image2[row][col]);//using the index

        } /* column loop */
        /* point to first pixel in next row of block in image */
        printf("%d \n",total);
        im2_p += COLS - col;//pointing to next row of image2
        im1_p += COLS - col;//pointing to next row of image1

    } /* row loop */


    return(total);
}

int main(int argc, char *argv[]) {

    unsigned int total;
    unsigned char *im1_p, *im2_p;
    int row, col;
    int block_row, block_col;

    /* initialize source data  */
    for (row = 0; row < ROWS; row++) {
        im1_p = image1[row]; /* point to first pixel in row */
        im2_p = image2[row];
        for (col = 0; col < COLS; col++) {
            unsigned char temp;

            temp = ((row+col+120) % 256); /* sort of a random number */
            *im1_p++ = temp;
			*im2_p++ = 255-temp;
        } /* column loop */
        //printf("%d\n",total);
    } /* row loop */

    //print_mat();//used for printing the matrix

    block_row = 0;
    block_col = 0;

    /* point to first pixel in each block */
    im1_p = &image1[16*block_row][16*block_col];
    im2_p = &image2[16*block_row][16*block_col];

    total = sad(im1_p, im2_p, COLS);

    printf("%u \n",total);
    return(0);
} /* end of main */



//print the matrix

void print_mat()
{
	//For image1
	for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
			printf("%i ", (int)image1[row][col]);
        }
        printf("\n");
    }
	printf("\n\n");

	//For image2
	for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
			printf("%i ",(int)image2[row][col]);
        }
        printf("\n");
    }
}
