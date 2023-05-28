#include <cs50.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
	string name;
	string number;

}
person;

int main(void)
{

    person people[2];
	people[0].name ="Carter";
  	people[1].number ="+310500000";
	people[0].name ="david";
  	people[1].number ="+310200000";

	string name = get_string("Name:");
    for (int i=0; 1<7;i++)

    {
		if (strcmp(people[i].name , name)==0)
		{
			printf("Found %s\n", people[i].number[i]);
			return 0;
		}
	}

	printf("Not Founf\n");
	return 1;

}