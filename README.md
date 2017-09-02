t# lab-exam-oil
This is based on the two-hour lab exam I had in my Programming module in First Year, which went towards my final mark.

## Original Instructions
- You are given a delimited file containing oil (petrol) price record
- Your program must read the data into an array of appropriate data structure, e.g.
        typedef struct {
          int year;
          double price[12];
          double average;
        } oil;
- Your program must calculate the average for the year for a specific record using the monthly date read in from the file.
- The program gives the user the option of finding the month with the highest price, or the year with the highest average price
- Ideally your program should function without knowing in advance how many records are in the file

## Notes
`oil.txt` needs to be in the same directory/folder as the executable for the program to work properly.

My inital version I handed up had a bug where a missing  `+ i` meant that the value for the year with the highest average price was wrong.
I fixed it for uploading it to GitHub.

It was also originally just one file, but I split it into three for GitHub.
Additionally, I used a command-line C compiler instead of Visual Studio's C++ compiler, so a few minor chages had to be made, such as removing `#include <stdafx.h>`.
