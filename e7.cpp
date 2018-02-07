#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    double *p;
	int i;
    int n = 10000;

    // initialize random
    srand (time(NULL));

    double a;
    double b;
    a = -1;
    b = +1;
    double r;

    /* allocation of vector */
	p = (double *)malloc(sizeof(double[n]));

	/* initialization of vector */
	for (i=0; i<n; i++)
	{
	    r = a + ((double) rand() * (b - a) / RAND_MAX);
		p[i] = r;
	}

    double s = 0;
	for (i=0; i<n; i++)
	{
	    s += p[i];
	}
	s /= n;
    printf("%f\n",s);


//    /* print vector */
//	for (i=0; i<n; i++)
//    {
//		printf("%f\n",p[i]);
//	}
//
//	free(p);

}
