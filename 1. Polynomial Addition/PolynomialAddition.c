#include<stdio.h>
struct poly
{
	int exp;
	int coeff;
};	

int main()
{
	struct poly poly1[100], poly2[100], sum[100];
	int poly1terms, poly2terms, i = 0, j = 0, k = 0;
	
	printf("Enter the number of terms in the First Polynomial: ");
	scanf("%d", &poly1terms);
    printf("\t\tEnter the First Polynomial:\n");
	for(i = 0; i < poly1terms; i++)
	{
        printf("Enter the coefficient of term %d: ", i + 1);
		scanf("%d", &poly1[i].coeff);
		printf("Enter the exponent of term %d: ", i + 1);
		scanf("%d", &poly1[i].exp);
	}
	
	printf("Enter the number of terms in the Second Polynomial: ");
	scanf("%d", &poly2terms);
	printf("\t\tEnter the Second Polynomial:\n");
	for(i = 0; i < poly2terms; i++)
	{
        printf("Enter the coefficient of term %d: ", i + 1);
		scanf("%d", &poly2[i].coeff);
		printf("Enter the exponent of term %d: ", i + 1);
		scanf("%d", &poly2[i].exp);
	}
	
   	i = 0;
	while (i < poly1terms && j < poly2terms)
	{
		if (poly1[i].exp == poly2[j].exp)
		{
			sum[k].coeff = poly1[i].coeff + poly2[j].coeff;
			sum[k].exp = poly1[i].exp;
			i++; j++;
		}
		else if (poly1[i].exp > poly2[j].exp)
		{
			sum[k].coeff = poly1[i].coeff;
			sum[k].exp = poly1[i].exp;
			i++;
		}
		else
		{
			sum[k].coeff = poly2[j].coeff;
			sum[k].exp = poly2[j].exp;
			j++;
		}
		k++;
	}

	while (i < poly1terms)
	{
		sum[k].coeff = poly1[i].coeff;
		sum[k].exp = poly1[i].exp;
		i++; k++;
	}

	while (j < poly2terms)
	{
		sum[k].coeff = poly2[j].coeff;
		sum[k].exp = poly2[j].exp;
		j++; k++;
	}
	
	printf("The sum of the two polynomials is: ");
	for(i = 0; i < k; i++)
	{
		if (i != 0 && sum[i].coeff>0)
		{
			printf("+ ");
		}
        if (sum[i].exp == 0)
		{
			printf("%d", sum[i].coeff);
		}
		else if (sum[i].exp == 1)
		{
			printf("%dx", sum[i].coeff);
		}
		else
		{
			printf("%dx^%d", sum[i].coeff, sum[i].exp);
		}
	}
	printf("\n");
	return 0;
}
