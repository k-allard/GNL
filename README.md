# GNL
[get_next_line 42 school project]

A function that returns a line ending with a newline, read from a file descriptor.

- Calling function get_next_line in a loop will allow you to read the text available on a file descriptor one line at a time until the EOF.

- The fungrion is able to manage multiple file descriptors. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

![115/100](https://github.com/k-allard/imgs/blob/master/Screenshot%202020-07-21%20at%2014.52.18.png)
