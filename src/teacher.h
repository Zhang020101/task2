struct teacher_Address{
	char *street;
	char *state;
	char *city;
};
struct teacherData{
	char *teacher_name;
	int tacher_id;
	int teacher_age;
	struct teacher_Address teacherAddress;
};

void steacher(void);
