#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int height, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size - height - 1; width++)
			{
				_putchar(' ');
			}
			for (width = 0; width <= height; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

