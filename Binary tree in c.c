#include<stdio.h>
#include<malloc.h>
struct bt{
	int data;
	struct bt *left,*right;
};
struct bt* new_node(int value)
{
	struct bt *node=(struct bt*)malloc(sizeof(struct bt));
	node->data=value;
	node->left=node->right=NULL;
	return(node);
}
preorder(struct bt *root)
{
    if(root)
    {
    	printf("%d\t",root->data);
    	preorder(root->left);
    	preorder(root->right);
	}
}
inorder(struct bt *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
postorder(struct bt *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}
main()
{
	struct bt *root=new_node(10);
	root->left=new_node(20);
	root->right=new_node(30);
	root->left->left=new_node(40);
	root->right->left=new_node(50);
	root->right->right=new_node(60);
	printf("preorder:\n");
	preorder(root);
	printf("\n\ninoreder:\n");
	inorder(root);
	printf("\n\npostorder:\n");
	postorder(root);
	return 0;
}
