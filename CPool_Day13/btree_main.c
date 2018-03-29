#include "./include/my.h"
#include "./include/btree.h"
#include <stdio.h>
int main()
{
	char *a = "node root\n";
	btree_t *r = btree_create_node(a);
	int (*applyf)() = my_putstr;
	int (*cmp)() = my_strcmp;
	//btree_t *p1 = btree_create_node("node p1\n");
	//btree_t *p2 = btree_create_node("node p2\n");
	//btree_t *p3 = btree_create_node("node p3\n");
	//btree_t *p4 = btree_create_node("node p4\n");
	//btree_t *p5 = btree_create_node("node p5\n");
	//btree_t *p6 = btree_create_node("666\n");
	size_t l_c = 0;
	//r->left = p1;
	//r->right = p2;
	//p1->right = p3;
	//p3->left = p4;
	//p4->right = p5;
	//btree_insert_data(&r,"node p1\n",(*cmp));
	//btree_insert_data(&r,"node p2\n",(*cmp));
	//btree_insert_data(&r,"node p3\n",(*cmp));
	//btree_insert_data(&r,"node p4\n",(*cmp));
	//btree_insert_data(&r,"node p1\n",(*cmp));
	btree_apply_prefix(r,*applyf);
	printf("%d\n",(int)btree_level_count(r));
}
