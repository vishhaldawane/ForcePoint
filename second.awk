#!/usr/bin/awk -f
# comment
BEGIN{ 
   print("-------heading------") 
   FS="|"
	printf("<table border=5 cellspacing=10 cellpadding=10>");
} 

{ 
	printf("<tr>\n");
	printf("<td>EMPNO</td><td>%d</td>\n",$1);
	printf("<td>ENAME</td><td>%s</td>\n",$2);
	printf("<td>JOB</td><td>%s</td>\n",$3);
	printf("<td>DEPT</td><td>%s</td>\n",$4);
	printf("<td>DOJ</td><td>%s</td>\n",$5);
	printf("<td>SALARY</td><td>%f</td>\n",$6);
	printf("</tr>\n");

} 

END {
  printf("\n</table>");
} 

