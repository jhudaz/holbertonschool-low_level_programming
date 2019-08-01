#ifndef linked
#define linked
/**
 * struct lists - first strut for list
 * @val: char pointer
 * @next: float
 */
typedef struct lists
{
	int val;
	struct node *next;
} list_t;
int print_list(const list_t *h);
int list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
