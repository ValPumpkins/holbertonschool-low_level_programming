# C - Search Algorithms

## Holberton Programm

- **0-linear.c** : function that searches for a value in an array of integers using the Linear search algorithm
- **1-binary.c** : function that searches for a value in a sorted array of integers using the Binary search algorithm
- **2-O** : time complexity (worst case) of a linear search in an array of size n
- **3-O** : space complexity (worst case) of an iterative linear search algorithm in an array of size n
- **4-O** : time complexity (worst case) of a binary search in an array of size n
- **5-O** : space complexity (worst case) of a binary search in an array of size n
- **6-O** : the space complexity of this function / algorithm :
```c
int **allocate_map(int n, int m)
{
	int **map;

	map = malloc(sizeof(int *) * n);

	for (size_t i = 0; i < n; i++)
	{
	map[i] = malloc(sizeof(int) * m);
	}
	return (map);
}
```
