

### About " \* "    
* It's "type" is: Pointer a -> a
* ex: int (\*time = 3);  means  time is a (Pointer int). And \*time is a (int)

#### When come together with const
* int const \* ;  :: Pointer (int const) -> (int const)
* int \* const - const pointer to int
* int const \* const - const pointer to const int

##### These are equal
* const int \* == int const \*
* const int \* const == int const \* const






### About " \& "
* It's "type" is: a -> Pointer a