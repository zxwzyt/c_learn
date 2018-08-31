#include <stdio.h>

typedef struct TreeNode *SearchTree;
typedef struct TreeNode *Position;

SearchTree MakeEmpty(SearchTree T);
Position Find(ElementType X, SearchTree T);
Position FindMin(SearchTree T);
Position FindMax(SearchTree T);
SearchTree Insert(ElementType X, SearchTree T);
SearchTree Delete(ElementType X, SearchTree T);
ElementType Retrive(Position P);

struct TreeNode
{
	ElementType Element;
	SearchTree Left;
	SearchTree Right;
}

SearchTree MakeEmpty(SearchTree T)
{
	if (T != NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}

	return NULL;
}

Position Find(ElementType X, SearchTree T)
{
	if (T == NULL)
		return NULL;
	if (X < T->Element)
		T = T->Left;
		return Find(X, T->Left);
	else
		if (X > T->Element)
			return Find(X, T->Right);
		else
			return T;
}

Position FindMin(SearchTree T);
{
	if (T == NULL)
		return NULL;
	else
		if (T->Left == NULL)
			return T;
		else
			return FindMin(T->Left);
}

//递归版
// Position FindMax(SearchTree T);
// {
// 	if (T == NULL)
// 		return NULL;
// 	else
// 		if (T->Right == NULL)
// 			return T->Right;
// 		else
// 			return FindMax(T->Right);
// }

//非递归版
Position FindMax(SearchTree T);
{
	if (T != NULL)
		while (T->Right != NULL)
			T = T->Right;
	return T;
}

SearchTree Insert(ElementType X, SearchTree T)
{
	if (T == NULL)
	{
		T = malloc(sizeof(struct TreeNode));
		if (T == NULL)
			FatalError("out of space!!");
		else
		{
			T->Element = X;
			T->Left = T->Right = NULL;
		}
	}
	else if (X < T->Element)
		T->Left = Insert(X, T->Left);
	else if(X > T->Element)
		T->Right = Insert(X, T->Right);

	return T;
}

SearchTree Delete(ElementType X, SearchTree T)
{
	Position Tmpcell;
	if (T == NULL)
		Error("Element not found");
	else if (X < T->Element)
		T->Left = Delete(X, T->Left);
	else if (X > T->Element)
		T->Right = Delete(X, T->Right);
	else if (T->Left && T->Right)
	{
		Tmpcell = FindMin(T->Right);
		T->Element = Tmpcell->Element;
		T->Right = Delete(T->Element, T->Right);
	}
	else
	{
		Tmpcell = T;
		if (T->Left == NULL)
			T = T->Right;
		else if (T->Right == NULL)
			T = T->Left;
		free(Tmpcell);
	}

	return T;
}

