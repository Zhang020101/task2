#include <stdio.h> 
#include "teacher.h"

void sTeacher (void)
{

struct teacherData teacher;
 
teacher.teacher_name = "Maryia"; 
teacher.teacher_id = 123456; 
teacher.teacher_age = 45;

teacher.teacher_Address.street = "4, pr. Nezavisimosti"; 
teacher.teacher_Address.state = "Minskaya";
 teacher.teacher_Address.city = "Minsk";
 

printf ("Hello, %s!", teacher.teacher_name); 
printf("\nTeacher Id is: %d", teacher.teacher_id); 
printf("\nTeacher Age is: %d", teacher.teacher_age);
printf("\n Regin %s, City %s, Address %s", 
	
	teacher.teacher_Address.state, 
	teacher.teacher_Address.city, 
	teacher.teacher_Address.street);
printf ("\nGoodbye!"); 
return 0;
}

