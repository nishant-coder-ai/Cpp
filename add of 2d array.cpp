#include<iostream>
using namespace std;
int main()
{
int first[10][10],second[10][10], add[10][10],i,j,r,c;
cout&lt;&lt;&quot;Enter the size of Row and Column\n&quot;;
cin&gt;&gt;r&gt;&gt;c; //r=2 c=2
/* Read Values for first Matrix */
cout&lt;&lt;&quot;Enter the values of First Matrix:\n&quot;;
for(i=0; i&lt;r; i++) //Row
{
for(j=0; j&lt;c; j++) //Column
{
cin&gt;&gt;first[i][j]; //Read row and column values
}
}
/* Read values for Second Matrix */
cout&lt;&lt;&quot;Enter the values for second matrices:\n&quot;;
for(i=0; i&lt;r; i++) //Row
{
for(j=0; j&lt;c; j++) //Column
{
cin&gt;&gt;second[i][j]; //Read row and column values
}
}

/* Print values for First Matrix */
cout&lt;&lt;&quot;Elements of First Matrix are:\n&quot;;
for(i=0; i&lt;r; i++)
{

for(j=0; j&lt;c;j++)
{
cout&lt;&lt;first[i][j]&lt;&lt;&quot; &quot;;
}
cout&lt;&lt;&quot;\n&quot;;
}

/* Print values for Second Matrix */
cout&lt;&lt;&quot;Elements of Second Matrix are:\n&quot;;
for(i=0; i&lt;r; i++)
{
for(j=0; j&lt;c;j++)
{
cout&lt;&lt;second[i][j]&lt;&lt;&quot; &quot;;
}
cout&lt;&lt;&quot;\n&quot;;
}

/* Write the addition computation code */
for(i=0; i&lt;r; i++)
{
for(j=0; j&lt;c; j++)
{
add[i][j] = first[i][j] + second[i][j];
}
}
/* Addition of Two Dimensional Array is: */
cout&lt;&lt;&quot;Addition of Two Dimensional Array is:\n&quot;;
for(i=0; i&lt;r; i++)
{

for(j=0; j&lt;c;j++)
{
cout&lt;&lt;add[i][j]&lt;&lt;&quot; &quot;;
}
cout&lt;&lt;&quot;\n&quot;;
}
return 0;
}
