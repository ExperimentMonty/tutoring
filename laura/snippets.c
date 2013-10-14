/***************Section about list function ************/

//This is a global variable we declared at the top of our file
int numbers[40000];
int i;
for(i = 0; i < 40000; i++)
{
  printf("%d\n", numbers[i];);
}


/***************Section about show function **********/

int to_count = 0, from_count = 0, unique = 0;
typedef struct{
  char email[102]
    } Node;

typedef struct{
  Node * email_sender;
  Node * email_receiver;
} Edge;

char email_looking_for[102] = "phillip@enron.com";
Node nodes[40000];
Edge edges[1100000];
int i;

for(int i = 0; edges[i] != NULL; i++)
  {
    if(strcmp(email_looking_for, edges[i].email_sender->email) == 0)
      {
	from_count++;
      }
    if(strcmp(email_looking_for, edges[i].email_receiver->email) == 0)
      {
	to_count++;
	//Add this email to a list of email addresses that sent messages to the email address we care about 
      }
    
  }
//Now, go through the list of emails we were creating, and count up the number of unique email addresses (I'll leave that function up to you, we wrote down some of the procedures to do that during tutoring)
//This function could probably be faster if you did a binary search for part of it, but it really won't save you that much time, so I wouldn't bother with it unless you're bored and want to show off.

/*********** Section about how we messed up the read_input function *****/

//We were reading in char arrays, and storing them into the fields of the Edge table
//However, the Edge structures take pointers to Node objects, not char arrays
//So, when time we did something like this:
index = check_names(email2);

if (index != -1) {
  nodes [index].email = email2;
}
edges[edge_index].sent_email = email;

//It should really have been:
index = check_names(email2);

if (index > current_node_index) {
  nodes[index].email = email2;
  current_node_index++;
}
edges[edge_index].sent_email = nodes[index];

//That way, our pointers to node objects will actually be pointing to node objects
//If you did it the way we initially did it, you'd start noticing weird behavior,
//like every edge having the same to and from address, and things like that.
//If you noticed from the code above, we see that our check_names functions should return the first open space in the array when it can't find a name, instead of returning -1 like we had before.


/**************qsort comparator******/

//For qsort, you have to give it a comparator function.  This function takes
//two objects, in our case, two Edge objects, and returns one of three values,
//0, -1, or +1.
//If the two edges are named a and b, then:
//if a should come before b, our function returns -1
//if a and b are equivalent, our function returns 0
//if b should come before a, our function returns +1
//Below is a sample of what a comparator function for integers should look like
//You can compare the pointer values directly, so you really don't need to worry
//about using things like strcmp for your function

int compare_int(int a, int b)
{
  if( a < b )
    {
      return -1;
    }
  if( a == b )
    {
      return 0;
    }
  if( a > b )
    {
      return 1;
    }
}

//You can find more info on qsort at this page:
//http://www.cplusplus.com/reference/cstdlib/qsort/


/****************dijkstra's********/
//I figured I'd just go over what we talked about before to freshen it up in your mind.
//For dijkstra's (in the "paths" function), you'll be using qsort to sort the 
//edges table (this sorting should be done at the end of reading the input)
//You'll do a binary search of the edges table for the first entry that the source node appears, 
//then put every node it's directly connected to as distance 1 from the source node. 
//You'll be saving these nodes to a list as you go.  
//Then, you take every distance 1 node, see who they are all connected to, 
//and those are distance 2 nodes (unless they're already marked as a distance 1 node). 
//You keep repeating this process until you run out of nodes, 
//and all of the remaining nodes are distance infinity (you don't actually
// need to keep track of distance infinity nodes, just take
// the total number of nodes, and subtract the number of nodes
// you've marked off (don't forget to count the source node))
