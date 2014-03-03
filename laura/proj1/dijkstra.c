#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_LENGTH 4096

typedef struct{
  char email[102];
} Node;

typedef struct{
  Node* from_email;
  Node* to_email;
} Edge;

Node nodes[40000];
Edge edges[1100000];

void read_input(FILE* input);
void print_list();
void print_commands();
void show_statistics(char* email);
void show_paths(char* email);

int main(int argc, char ** argv)
{
  /*Variable declarations*/
  FILE* input;
  int quit;
  char line[LINE_LENGTH];
  char email[102];
  char user[51];
  char tld[51];

  if( argc != 2 )
    {
      printf("Usage: d input_file\n");
      return 1;
    }

  /*Open the file for reading*/
  input = fopen(argv[1], "r");

  /*Read data from the file*/
  read_input(input);

  /*Close file for reading*/
  fclose(input);

  /*Program loop*/
  quit = 0;

  while(quit == 0)
    {
      /*Read in next line*/
      fgets(line, LINE_LENGTH, stdin);
      
      /*printf("%s", line);*/
      
      /*quit option*/
      if( strcmp(line, "quit\n") == 0 )
	{
	  quit = 1;
	}

      /*list option*/
      else if( strcmp(line, "list\n") == 0)
	{
	  print_list();
	}

      /*show option*/
      else if( strncmp(line, "show ", 5) == 0 )
	{
	  /*grab the user to show*/
	  if( sscanf(line, "show %s", email) )
	    {
	      /*show statistics for email address*/
	      show_statistics(email);
	    }
	  else
	    {
	      /* Could not parse correctly */
	      print_commands();
	    }
	}

      /*paths option*/
      else if( strncmp(line, "paths ", 6) == 0 )
	{
	  /*grab the user to show*/
	  if( sscanf(line, "paths %s", email) )
	    {
	      /*show statistics for email address*/
	      show_paths(email);
	    }
	  else
	    {
	      /* Could not parse correctly */
	      print_commands();
	    }
	}

      /*unrecognizable command*/
      else
	{
	  print_commands();
	}
    }

  return 0;
}


void read_input(FILE* input)
{
  char line[LINE_LENGTH];
  
  /*printf("Reading input\n");*/
  return;
}

void print_list()
{
  printf("Printing list\n");
  return;
}

void print_commands()
{
  printf("Unrecognizable command\n");
  printf("Printing commands and their usage!\n");

  printf("Invalid command, valid commands are:\n");
  printf("quit\n");
  printf("list\n");
  printf("show <email_address>\n");
  printf("paths <email_address>\n");
  return;
}

void show_statistics(char* email)
{
  printf("Showing statistics about %s\n", email);
  return;
}

void show_paths(char* email)
{
  printf("Showing paths for %s\n", email);
  return;
}
