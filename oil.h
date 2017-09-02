#ifndef OIL_H
#define OIL_H

typedef struct {
	int year;
	double price[12];
	double average;
} oil;

int countYears();
oil *getOilData(oil *oilData);
double averagePrice(double *prices);
void printChoices();
void highestPrice(oil *oilData);
char *getMonth(int month);
void highestAvgPrice(oil *oilData);

#endif