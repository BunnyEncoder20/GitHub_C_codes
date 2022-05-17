/*Given marks scored by 'n' students in 'm' subjects as a nxm matrix, write  a C program to
 find the student who scored the highest total. For example, given marks scored by 5 students
  in 4 subjects in a 5x4 matrix as shown below
    | 20 30 40 50 |
    | 22 33 49 55 |
    | 12 13 44 34 |
    | 23 24 25 26 |
    | 33 44 56 78 |

Input Format

First line contains the number of students and number of subjects separated by a space,n and m

Next 'n' lines contains marks secured by the students in 'm' subjects

Output Format

Print the student who has secured highest total  */

#include<stdio.h>
#include<stdlib.h>
void calc_totalmarks(int n,int m,int marks[][m])
{
  int leaderboard[n][2],total;
  for (int i = 0; i < n; i++)
  {
    total=0;
    for (int j = 0; j < m; j++)
    {
      leaderboard[i][0]=i+1;
      total+=marks[i][j];
    }
    leaderboard[i][1]=total;
  }
  int max=leaderboard[0][0],maxindex;
  for (int i = 0; i < n; i++)
  {
    if (max<leaderboard[i][1])
      {
        max=leaderboard[i][1];
        maxindex=leaderboard[i][0];
      }
  }
  printf("\nThe maximum marks are : %d\nScored by Student %d",max,maxindex);
}
int main()
{
  system("CLS");
  int n,m;
  scanf("%d %d",&n,&m);
  int marks[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d",&marks[i][j]);
    } 
  }
  calc_totalmarks(n,m,marks);
  return 0;
}