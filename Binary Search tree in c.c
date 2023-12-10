#include<stdio.h>
#include<malloc.h>
#define n 5
struct bst{
	int data;
	struct bst *left,*right;
};
struct bst* new_node(int value)
{
	struct bst *node=(struct bst*)malloc(sizeof(struct bst));
	node->data=value;
	node->left=node->right=NULL;
	return(node);
}
struct bst* insert(struct bst *node,int value)
{
	if(node==NULL)
	return new_node(value);
	
	if(value<node->data)
	{
		node->left=insert(node->left,value);
	}
	else if(value>node->data)
	{
		node->right=insert(node->right,value);
	}
	return node;
}
preorder(struct bst *root)
{
    if(root)
    {
    	printf("%d\t",root->data);
    	preorder(root->left);
    	preorder(root->right);
	}
}
inorder(struct bst *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
postorder(struct bst *root)
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
	int i,a;
	struct bst *root=insert(root,5);
	printf("enter elements for binary search tree=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		root=insert(root,a);
	}
	printf("preorder:\n");
	preorder(root);
	printf("\n\ninoreder:\n");
	inorder(root);
	printf("\n\npostorder:\n");
	postorder(root);
	return 0;
}
