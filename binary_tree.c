#include"init_op.h"
#include"ins_op.h"
#include"show_tree.h"
#include"find_it.h"
#include"prop_find.h"
#include"delete_it.h"

void main()
{
	int i=0;
	char arr[5] = {'C','B','E','D','A'};
	rptr = '\0';
	
	for(i=0;i<5;i++)
	{
		rptr = ins_op(arr[i],rptr);
		show_tree(rptr);
	}
}
