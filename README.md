# GNL
A function that returns a line ending with a newline, read from a file descriptor.

- Calling function get_next_line in a loop will allow you to read the text available on a file descriptor one line at a time until the EOF.

- The fungrion is able to manage multiple file descriptors. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

To test and use:
 1. git clone
 2. sh test.sh to test how function works with one single text1.txt file
 3. sh test_multi_fd.sh to test how function reads and prints 1 line from each of 2 files by turns, till EOF is reached in both files
