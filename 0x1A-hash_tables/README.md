# Hash Tables
- In computing, a hash table, also known as hash map or dictionary, is a data structure that implements a set abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.

# Python Dictionaries
- Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type ```d = {'a': 1, 'b': 2}```, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one in C though.
Check out:
	-  ````` Python Dictionary Implementation: http://www.laurentluce.com/posts/python-dictionary-implementation/ `````
- Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table.

## Tasks
0. ````>>> ht = {}```` - Function that creates a hash table
	- Returns a pointer that creates a newly created hash table
	- Compile with: ````gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a````

1. ````djb2```` - Function implementing the djb2 algorithm
	- Compile with: ````gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b````

2. ````key -> index```` - Function that gives you the index of a key
	- Returns the index at which the key/value pair should be stored in the array of the hash table
	- Compile with: ````gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c````

3. ````>>> ht['betty'] = 'cool'```` - Function that adds an element to the hash table
	- Returns 1 on success, 0 on failure
	- Compile with: ````gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d````

4. ````>>> ht['betty']```` - Function that retrieves a value associated with a key
	- Returns the value associated with the element, or NULL if key is not present
	- Compile with: ````gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e````

5. ````>>> print(ht)```` - Function that prints a hash table
	- if `ht` is NULL, doesn't print anything
	- Compile with ````gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f````
6.```` >>> del ht```` - Function that deletes a hash table
	- Where `ht` is the hash table
	- Compile with: ````gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g````

🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
