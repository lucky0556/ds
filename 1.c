#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct day {
char *dayName;
char *date;
char *activity;
};

struct day* create() {
struct day *calendar = (struct day*) malloc(7 * sizeof(struct day));
}

void read(struct day* calendar) {
int i;
for (i = 0; i < 7; i++) {
printf("Enter the name of the day: ");
char tempName[50];
scanf("%s", tempName);
calendar[i].dayName = (char*) malloc((strlen(tempName) + 1) * sizeof(char));
strcpy(calendar[i].dayName, tempName);

printf("Enter the date: ");
char tempDate[50];
scanf("%s", tempDate);
calendar[i].date = (char*) malloc((strlen(tempDate) + 1) * sizeof(char));
strcpy(calendar[i].date, tempDate);

printf("Enter the activity description for %s: ", calendar[i].dayName);
char tempActivity[100];
scanf(" %[^\n]", tempActivity);  // To read a full line including spaces
calendar[i].activity = (char*) malloc((strlen(tempActivity) + 1) * sizeof(char));
strcpy(calendar[i].activity, tempActivity);
}
}

void display(struct day* calendar) {
int i;
printf("\nCalendar Details:\n");
for (i = 0; i < 7; i++) {
printf("Day: %s\n", calendar[i].dayName);
printf("Date: %s\n", calendar[i].date);
printf("Activity: %s\n", calendar[i].activity);
}
}

void freeMemory(struct day* calendar) {
int i;
for (i = 0; i < 7; i++) {
free(calendar[i].dayName);
free(calendar[i].date);
free(calendar[i].activity);
}
free(calendar);
}

int main() {
struct day* myCalendar = create();
printf("Enter the details for each day:\n");
read(myCalendar);
display(myCalendar);
freeMemory(myCalendar);
return 0;
}
