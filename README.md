# Chaining-implementation

## What is Chaining? 
At every location (hash index) in your hash table store a linked list of items. This is better than bucketing as you only use as many nodes as necessary. Some space will still be wasted for the pointers but not nearly as much as bucketing. Table will also not overflow (ie no pre-defined number of buckets to exceed). You will still need to conduct a short linear search of the linked list but if your hash function uniformly distributes the items, the list should not be very long
To handle the collision: 
This technique creates a linked list to the slot for which collision occurs.
The new key is then inserted in the linked list.
These linked lists to the slots appear like chains.
That is why, this technique is called as separate chaining.
