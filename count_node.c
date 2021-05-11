/*
 ============================================================================
 compelet structed node and some data is added.
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data ;
	struct node *link;
};
int main() {
	void count_of_node(struct node *head );
// hear is the node in which data 45 is added
	struct node *st = malloc(sizeof(struct node));  // 1st node is created
	st-> data = 45;
	st-> link = NULL;

//also hear is node added data is equal to 98
	struct node *nd = malloc(sizeof(struct node));  // 2nd node is created
	nd-> data = 98;
	nd->link = NULL;

	st->link = nd;   // linking node



	struct node * rd = malloc(sizeof(struct node));
	rd->data = 23;
	rd->link = NULL;

	nd->link = rd;   // linking node

	struct node *app = malloc(sizeof(struct node));
	app->data = 84;
	app->link = NULL;

	nd->link = app;   // linking node

	struct node *bab = malloc(sizeof(struct node ));
	bab->data = 100;
	bab->link = NULL;

	nd->link = bab;   // linking node

	printf("node is created  \n%d %d %d %d %d \n",st->data,nd->data,rd->data,app->data,bab->data);

	return 0;

}
void count_of_node(struct node *head ) {
	int count = 0;
	struct node *ptr = NULL;        // ptr is a pointer
	ptr = head;                                   // ptr pointing head
	while(ptr != NULL) {
		count++;
		ptr = ptr->link;
	}
	printf("%d",count);                 // how many number of node is created
}
