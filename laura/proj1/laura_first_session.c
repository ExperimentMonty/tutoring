#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_input (FILE *input);
void print_list ();
void show_email_addresses (char *email);
void show_paths (char *email);
void print_commands ();
int check_names (char *email);

#define LINE_LENGTH 4096

typedef struct {
char email [102];
}
Node;

typedef struct {
Node* sent_email;
Node* recieve_email;
}
Edge;

Node nodes [40000];
Edge edges [1100000];




int main (int argc, char **argv) {
int quit;
char line [LINE_LENGTH];
char email [102];


FILE * input;

if (argc != 2) {
printf ("Usage: d imput_file\n");
return 1;
}


/* Open file*/
input = fopen (argv[1], "r");

read_input (input);

/* Close file*/
fclose (input);

quit =0;
while (quit == 0) {

/*read the next line*/
fgets (line, LINE_LENGTH, stdin);
if (strcmp (line, "quit\n") == 0) {
quit = 1;
}

else if (strcmp (line, "list\n") == 0) {
print_list();
}

else if (strncmp (line, "show ", 5) == 0) {
sscanf (line, "show %s", email);

show_email_addresses(email);
}

else if (strncmp (line, "paths ", 6) == 0) {
sscanf (line, "paths %s", email);
show_paths (email);
}

else {
print_commands();
}
}

return 0;
}

/*read all files*/
void read_input (FILE *input) {
char line [LINE_LENGTH];
char user_name [50];
char user_name2 [50];
char host_name[50];
char host_name2[50];
char email[102];
int index;
char email2[102];
int edge_index = 0;

while (fgets (line, LINE_LENGTH, input) != NULL) {
sscanf (line, "%49[^@ ]@%49s -> %49[^@ ]@%49s",user_name, host_name, user_name2, host_name2);
sprintf (email, "%s@%s", user_name, host_name);
index = check_names(email);

if(index != -1) {
/*Not found, add to list*/
nodes[index].email = email;
}

sprintf (email2, "%s@%s", user_name2, host_name2);
index = check_names(email2);

if (index != -1) {
nodes [index].email = email2;
}
edges[edge_index].sent_email = email;
edges[edge_index].recieve_email = email2;
edges++;

}
printf ("read_input");
return;
}


/*print*/
void print_list() {
printf ("print_line");
return;
}


/*show incount and outcont*/
void show_email_addresses (char *email) {
printf ("show_email_addresses %s", email);
return;
}

void show_paths (char *email) {
printf ("show_paths %s", email);
return;
}


void print_commands () {
printf ("Valid commands are:\n");
printf ("quit\n");
printf ("list\n");
printf ("show <email_address>\n");
printf ("paths <email_address>\n");
}


int check_names (char *email) {
int i =0;
/*check list if email is already there*/
while (strcmp (nodes [i].email, "")) {
if (nodes [i].email == email){
return -1;
}
i++;
}
return i;
} 
