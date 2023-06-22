struct teacherAddress{
	char *street;
	char *state;
	char *city;
};
struct teacherData{
	char *teacher_name;
	int teacher_id;
	int teacher_age;
	struct teacherAddress teacher_Address;
};

int teacherFunction(void);
