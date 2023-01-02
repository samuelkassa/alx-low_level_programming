Even more pointers, arrays and strings
1. A function that fills memory with a constant byte.
	The _memset() function fills the first n bytes of the memory.
	area pointed to by s with the constant byte b.
	Returns a pointer to the memory area s.
2. A function that copies memory area.
	The _memcpy() function copies n bytes from memory area src to memory area dest.
	Returns a pointer to dest.
3. A function that locates a character in a string.
	Returns a pointer to the first occurrence of the character c in the string s,
	or NULL if the character is not found.
4. A function that gets the length of a prefix substring
	Returns the number of bytes in the initial segment of s which consist only of
	bytes from accept.
